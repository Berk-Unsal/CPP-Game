#include "player.h"
#include <iostream>


Player::Player(){
    std::string _name;
    std::cout << "Your name : " << std::endl;
    std::cin >>  _name;
    Player::name = name;
    std::cout << "Which race you want to be: " << std::endl; // TODO : IMPLEMENT THE RACES SO THAT PLAYER CAN CHOOSE
    int choose;
    std::cin >> choose;
    /*
        switch(choose){
            case 1:
                Player::race = ?;
                .
                .
                .

                break;
            case 2:
                .
                .
                .        
            .
            .
            .
        }
    */

    
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
        std::cout << "Equipment " << start <<": " << i << std::endl; 
        start++;
    }
}

void Player::see_status_effect() {
    std::cout << "Current status effect is " <<Player::status_effect << std::endl; 
}

void Player::change_golds(int amount) {
    Player::golds += amount;
}