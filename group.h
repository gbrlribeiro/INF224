#ifndef GROUP_H
#define GROUP_H
#include <string>
#include <list>
#include <iostream>
#include <memory>
#include "media.h"

class Group : public std::list<std::shared_ptr<Media>>{
    private:
        std::string groupName;
    public:
        Group(std::string _groupName) : groupName(_groupName){}

        inline std::string getGroupName() const {return groupName;}
        inline void setGroupName(std::string name) {groupName = name;}

        void showGroup(std::ostream &s) const;
        void removeByName(std::string name);
};



#endif //GROUP_H