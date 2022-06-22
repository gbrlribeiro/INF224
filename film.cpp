#include "film.h"

void Film::printChapters(std::ostream &s) const {
    Video::printVariables(s);
    s << "Number of chapters: " << numChapters << std::endl;
    for(int i=0; i<numChapters; i++){
        s << "Chapter number: " << i+1 << " " << "Chapter length: " << lengthChapters[i] << std::endl;
    }
}

void Film::setChapters(int _numChapters, const int* chapterPointer){
    this->numChapters = _numChapters;
    delete [] this->lengthChapters;
    this->lengthChapters = nullptr;
    if(numChapters>0){
        this->lengthChapters = new int[numChapters];
    }
    for(int i = 0; i<numChapters; i++){
        this->lengthChapters[i] = chapterPointer[i];
    }
}


Film& Film::operator=(const Film& from){
    Video::operator=(from);
    numChapters = from.numChapters;
    delete lengthChapters;
    if(from.lengthChapters){
        this->setChapters(from.numChapters, from.lengthChapters);
    }
    else{
        lengthChapters = nullptr;
    }
    return *this;

}   
