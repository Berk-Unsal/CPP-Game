#ifndef STORY_H
#define STORY_H

#include "player.h"


class Story{
private:
    int story_key;

public:
    Story(Player& Player){
        if(Player.race == "orc") story_key = 0;
        else if(Player.race == "human") story_key = 1;
        else if(Player.race == "wizard") story_key = 2;

    }
}






#endif 