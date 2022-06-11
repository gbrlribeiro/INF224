//
// main.cpp
// Created on 21/10/2018
//

#include <iostream>
#include "media.h"

using namespace std;

int main(int argc, const char* argv[])
{
    Media *m = new Media("teste","testePath");
    m->printVariables(cout);
    delete m;
    
    return 0;
}
