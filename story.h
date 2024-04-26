#ifndef STORY_H
#define STORY_H
#include <iostream>
#include <string>
#include "player.h"



class Event{
public:
    std::string description;
    std::vector<std::string> choices;
    std::vector<int> consequences;
    Event(std::string _description, std::vector<std::string> _choices, std::vector<int> _consequences) : description(_description), choices(_choices), consequences(_consequences){}
};


class HumanStoryline{
public:
    std::vector<Event>storyline;
    HumanStoryline();
};

class OrcStoryline{
public:
    std::vector<Event>storyline;
    OrcStoryline();
};

class WizardStoryline{
public:
    std::vector<Event>storyline;
    WizardStoryline();
};

class StorylineManager{
private:
    void story_init();
public:
    StorylineManager(Player& player);
};

#endif