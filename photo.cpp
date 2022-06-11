#include "photo.h"

void Photo::printVariables(std::ostream &s) const{
    Media::printVariables(s);
    s << "x: " << Photo::getX() << '\n' << "y: " << Photo::getY() << std::endl;
}

void Photo::play() const{
    std::string command = std::string("imagej ")+getPath()+std::string(" &");
    system(command.c_str());
}