#ifndef media_h
#define media_h

#include <iostream>
#include <string>


class Media{
    private:

        std::string fileName;
        std::string filePath;
    
    public:
        
        Media();
        Media(std::string _fileName, std::string _filePath) : fileName(_fileName), filePath(_filePath) {}

        virtual ~Media();
        
        inline std::string getName() const {return fileName;}
        inline std::string getPath() const {return filePath;}
        
        inline void setType(std::string _fileName){fileName = _fileName;}
        inline void setPath(std::string _filePath){filePath = _filePath;}

        virtual void printVariables (std::ostream &s) const;

        virtual void play() const = 0;
};

#endif //media_h