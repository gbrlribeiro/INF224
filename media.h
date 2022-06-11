#ifndef media_h
#define media_h

#include <iostream>
#include <string>

using namespace std;

class Media{
    private:

        string fileType;
        string filePath;
    
    public:
        
        Media();
        Media(string _fileType, string _filePath) : fileType(_fileType), filePath(_filePath) {};
        ~Media();

        inline string getType() const {return fileType;}
        inline string getPath() const {return filePath;}
        
        inline void setType(string _fileType){fileType = _fileType;}
        inline void setPath(string _filePath){filePath = _filePath;}

        void printVariables (ostream &s) const;
};

#endif //media_h