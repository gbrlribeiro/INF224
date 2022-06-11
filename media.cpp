#include "media.h"

Media::Media(){
}

Media::~Media(){
}

void Media::printVariables (ostream &s) const{
    s << "file type:" << getType() << '\n' << "file path:" << getPath() << endl;
}

