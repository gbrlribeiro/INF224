#include "video.h"

void Video::printVariables(std::ostream &s) const{
    Media::printVariables(s);
    s << "video length: " << Video::getLength() << std::endl;
}

void Video::play() const{
    std::string command = std::string("mpv ")+getPath()+std::string(" &");
    system(command.c_str());
}
