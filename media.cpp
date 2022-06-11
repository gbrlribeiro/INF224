#include "media.h"

Media::Media(){

}

Media::~Media(){

}


void Media::printVariables (std::ostream &s) const{
    s << "file type:" << getName() << '\n' << "file path:" << getPath() << std::endl;
}

