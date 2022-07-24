#include "group.h"

void Group::showGroup(std::ostream &s) const{
    s << "Printing group:" << groupName << std::endl;
    for(auto it = this->begin(); it != this->end(); it++){
        (*it)->printVariables(s);
    }   
}

void Group::removeByName(std::string name){
    for(auto it : *this){
        if(it->getName() == name){
            it.reset();
            this->remove(it);
            return;
        }
    }
    std::cout << "Media not found in " << this->getGroupName() << "group." << std::endl;
}