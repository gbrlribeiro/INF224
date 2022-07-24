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
#include "manager.h"

using namespace std;

int main(int argc, const char* argv[])
{

    Manager* manager = new Manager;
    GroupPtr group = manager->createGroup("group");
    PhotoPtr photo1 = manager->createPhoto("paris1", "paris.jpg", 40, 70);
    PhotoPtr photo2 = manager->createPhoto("paris2", "paris2.jpg",40, 70);
    VideoPtr video = manager->createVideo("marcel", "marcel.mp4", 36);
    group->push_back(photo1);
    group->push_back(photo2);
    group->push_back(video);
    
    //cout << "We'll print groups contents first: " << '\n' << endl;

    //group->showGroup(cout);

    //cout << "Now we'll show our created media using manager" << '\n' << endl;
    //manager->playMedia("paris1");
    
    //cout << "Media should be playing ..." << endl;

    //cout << "---------------------------" << endl;

    //cout << "Now we'll delete a media and check if it's deleted from the group" << '\n' << endl;
    cout << video.use_count() << endl;
    manager->removeMedia("marcel");

    //group->showGroup(cout);

    //cout << "Let's try and play the deleted video!" << endl;
    cout << video.use_count() << endl;
    video->play();
    video.reset();

    cout << video.use_count() << endl;
    delete manager;
    return 0;
}
