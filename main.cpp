//
// main.cpp
// Created on 21/10/2018
//

#include <iostream>
#include "media.h"
#include "photo.h"
#include "video.h"
#include "film.h"
#include "group.h"

using namespace std;

int main(int argc, const char* argv[])
{
   Group *group = new Group("paris photos");
   Photo *p1 = new Photo("paris1", "paris.jpg", 700, 400);
   Photo *p2 = new Photo("paris2", "paris2.jpg", 700, 400);
   Photo *p3 = new Photo("paris3", "paris3.jpg", 700, 400);
   cout << group->getGroupName() << endl;
   group->push_back(p1);
   group->push_back(p2);
   group->push_back(p3);
   group->showGroup(cout);
   delete group;

   cout << "--------------------" << "Making sure photos weren't deleted" << "-----------" << endl;

   p1->printVariables(cout);
   p2->printVariables(cout);
   p3->printVariables(cout);
    
    return 0;
}
