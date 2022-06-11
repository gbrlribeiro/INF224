//
// main.cpp
// Created on 21/10/2018
//

#include <iostream>
#include "media.h"
#include "photo.h"
#include "video.h"

using namespace std;

int main(int argc, const char* argv[])
{
    Video *v = new Video("marcel","marcel.mp4", 42);
    Photo *p = new Photo("paris", "paris.jpg", 1000, 749);
    v->printVariables(cout);
    p->printVariables(cout);
    v->play();
    p->play();
    delete v;
    delete p;
    
    return 0;
}
