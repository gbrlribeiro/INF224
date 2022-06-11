#ifndef photo_h
#define photo_h

#include "media.h"

class Photo : public Media {
    private:
        //x and y are the dimensions of a photo
        int x, y;

    public:
        Photo(std::string _fileName, std::string _filePath, int _x, int _y) : 
            Media(_fileName, _filePath), x(_x), y(_y){}
        
        virtual ~Photo() override {}

        inline void setX (int _x) {x = _x;}
        inline void setY (int _y) {y = _y;}

        inline int getX() const {return x;}
        inline int getY() const {return y;}

        void printVariables(std::ostream &s) const override;
        void play() const override;
};






#endif //photo_h