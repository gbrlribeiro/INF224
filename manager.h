#ifndef manager_h
#define manager_h

#include <map>
#include <string>
#include "media.h"
#include "photo.h"
#include "video.h"
#include "group.h"
#include "film.h"

typedef std::shared_ptr<Media> MediaPtr;
typedef std::shared_ptr<Group> GroupPtr;
typedef std::shared_ptr<Photo> PhotoPtr;
typedef std::shared_ptr<Video> VideoPtr;
typedef std::shared_ptr<Film> FilmPtr;


class Manager {
    private:
        std::map<std::string, MediaPtr> MediaMap;
        std::map<std::string, GroupPtr> GroupMap;
    public:

        Manager() {}
        ~Manager() {}

        PhotoPtr createPhoto(std::string name, std::string path, int x, int y);
        VideoPtr createVideo(std::string name, std::string path, int length);
        FilmPtr createFilm(std::string name, std::string path, int length, int numChapters);
        GroupPtr createGroup(std::string name);

        void removeMedia(std::string name);
        void removeGroup(std::string name);

        void showMedia(std::string name){
            if(MediaMap.count(name)){
                MediaMap[name]->printVariables(std::cout);
            }
        }

        void findMedia(std::string name){
            auto it = MediaMap.find(name);
            std::cout << "Media found at position #" << it->first << std::endl;
        }

        void playMedia(std::string name){
            if(MediaMap.count(name)){
                MediaMap[name]->play();
                return;
            }
            std::cout << "Couldn't play media" << std::endl;
        }


};


#endif //MANAGER_H