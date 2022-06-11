#ifndef video_h
#define video_h

#include "media.h"

class Video : public Media {
    private:
        int length;

    public:
        Video(std::string _fileName, std::string _filePath, int _length) : 
            Media(_fileName, _filePath), length(_length) {}
        
        virtual ~Video() override {}

        inline void setLength(int _length) {length = _length;}
        
        inline int getLength() const {return length;}

        void printVariables (std::ostream &s) const override;

        void play() const override;
};




#endif //video_h