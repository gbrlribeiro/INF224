#ifndef FILM_H
#define FILM_H

#include "video.h"

class Film : public Video{
    private:
        int *lengthChapters;
        int numChapters;

    public:
        Film(std::string _fileName, std::string _filePath, int _length, int _numChapters) : 
            Video(_fileName, _filePath, _length), numChapters(_numChapters) { lengthChapters = nullptr; }

        ~Film(){ delete [] lengthChapters;}
        
        void setChapters(int _numChapters, const int *chapterPointer);

        inline int getChapters() const {return numChapters;}
        inline const int* getChaptersDuration() const {return lengthChapters;}
        inline int getChapterLength(int chapter) const {return lengthChapters[chapter];}

        Film& operator=(const Film& from);
        void printChapters(std::ostream &s) const;
};







#endif //FILM_H