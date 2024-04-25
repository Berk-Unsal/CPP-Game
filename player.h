/*
    Implementing the player class.
*/
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>



class Player{
private:
    std::string name; // name of the player
    std::string race; // race of the player 
    double health; // health of the player
    double attack_damage; // attack damage of the player
    int exp_points; // experience points of the player
    std::vector<std::string> equipments; // equipments the player have
    std::string status_effect; // status effect that player have
    int golds; // golds that player have
public:
    Player(); // constructor 
    void change_health(double amount); // function to change the health
    void change_attack_damage(double amount); // function to change the attack damaage
    void change_exp_points(int amount); // function to change the experience points
    void see_equipments(); // function to see the equipments player have
    void see_status_effect(); // function to see the status effect
    void set_status_effect(std::string effect); // function to set the status effect
    void change_golds(int amount); // function to see the golds that player have
};


#endif 