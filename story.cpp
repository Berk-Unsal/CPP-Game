#include "story.h"
#include "player.h"


HumanStoryline::HumanStoryline(){
    storyline.push_back(Event("You have crossed a road",{"go left","go right"},{1,2})); // [INFO] JUST A TEMPLATE NOT THE STORYLINE
}

OrcStoryline::OrcStoryline(){
    storyline.push_back(Event("You have crossed a road",{"go left","go right"},{1,2})); // [INFO] JUST A TEMPLATE NOT THE STORYLINE
}

WizardStoryline::WizardStoryline(){
    storyline.push_back(Event("You have crossed a road",{"go left","go right"},{1,2})); // [INFO] JUST A TEMPLATE NOT THE STORYLINE
}


StorylineManager::StorylineManager(Player& player){
    
}