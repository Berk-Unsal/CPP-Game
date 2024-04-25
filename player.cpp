#include "player.h"
#include <iostream>


Player::Player(){
    Player::golds = 0;
    Player::exp_points = 0;
    Player::status_effect = "none";
    std::string _name;
    std::cout << "Your name : " << std::endl;
    std::cin >>  _name;
    Player::name = name;
    std::cout << "Which race you want to be: " << std::endl; // TODO : IMPLEMENT THE RACES SO THAT PLAYER CAN CHOOSE
    int choose;
    std::cin >> choose;  
        switch(choose){
            case 1:
                Player::race = "orc";
                Player::health = 150;
                Player::attack_damage =  30;
                Player::equipments["maul"] = 10;
                break;
            case 2:
                Player::race = "human";
                Player::health = 100;
                Player::attack_damage =  25;
                Player::equipments["spear"] = 7;
                break;
            case 3:
                Player::race = "wizard";
                Player::health = 70;
                Player::attack_damage =  25;
                Player::equipments["fire_attack"] = 20;
                break;
        }
    

    
}

void Player::change_health(double amount) {
    Player::health += amount;
    
}

void Player::change_attack_damage(double amount) {
    Player::attack_damage += amount;
}

void Player::change_exp_points(int amount) {
    Player::exp_points += amount;
 
}

void Player::see_equipments() {
    int start = 1;
    for(auto i : Player::equipments){
        std::cout << "Equipment " << start <<": " << i.first << std::endl; 
        start++;
    }
}

void Player::see_status_effect() {
    std::cout << "Current status effect is " << Player::status_effect << std::endl; 
}

void Player::set_status_effect(std::string& effect){
    Player::status_effect = effect;
}

void Player::change_golds(int amount) {
    Player::golds += amount;
}

void Player::change_equipment(){
    std::cout << "Which equipment you want to switch to: " << std::endl;
    Player::see_equipments();
    std::string _operate;
    std::cin >> _operate;
    for(auto& i:Player::equipments){
        if(_operate == i.first){
            Player::current_equipment = i.first;
        }
    }
}