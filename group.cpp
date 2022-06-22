#include "group.h"

void Group::showGroup(std::ostream &s) const{
    s << "Printing group:" << groupName << std::endl;
    for(auto it = this->begin(); it != this->end(); it++){
        (*it)->printVariables(s);
    }   
}