//
// main.cpp
// Created on 21/10/2018
//

#include <iostream>
#include "media.h"
#include "photo.h"
#include "video.h"
#include "film.h"

using namespace std;

int main(int argc, const char* argv[])
{
    int chapters = 10;
    Film *f = new Film("marcel", "marcel.mp4", 40, chapters);
    int lengthArr [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    f->setChapters(chapters, lengthArr);
    lengthArr[0] = 3;
    lengthArr[1] = 12;
    f->printChapters(cout);
    delete f;
    
    return 0;
}
