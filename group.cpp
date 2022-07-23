#include "group.h"

void Group::showGroup(std::ostream &s) const{
    s << "Printing group:" << groupName << std::endl;
    for(auto it = this->begin(); it != this->end(); it++){
        (*it)->printVariables(s);
    }   
}

void Group::removeByName(std::string name){
    this->remove_if([name](std::shared_ptr<Media>p){return (p->getName() == name);});
    
}