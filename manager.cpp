#include "manager.h"
#include "video.h"


GroupPtr Manager::createGroup(std::string name){
    if(GroupMap.count(name)){
        GroupMap[name].reset();
    }
    GroupPtr group = GroupPtr(new Group(name));
    GroupMap[name] = group;
    return group;
}

PhotoPtr Manager::createPhoto(std::string name, std::string path, int x, int y){
    if(MediaMap.count(name)){
        MediaMap[name].reset();
    }
    PhotoPtr photo = PhotoPtr(new Photo(name, path, x, y));
    MediaMap[name] = photo;
    return photo;
}

VideoPtr Manager::createVideo(std::string name, std::string path, int length){
    if(MediaMap.count(name)){
        MediaMap[name].reset();
    }
    VideoPtr video = VideoPtr(new Video(name, path, length));
    MediaMap[name] = video;
    return video;
}


FilmPtr Manager::createFilm(std::string name, std::string path, int length, int numChapters){
    if(MediaMap.count(name)){
        MediaMap[name].reset();
    }
    FilmPtr film = FilmPtr(new Film(name, path, length, numChapters));
    MediaMap[name] = film;
    return film;
}

void Manager::removeGroup(std::string name){
    if(GroupMap.count(name)){
        GroupMap[name].reset();
        GroupMap.erase(name);
        return;
    }
    std::cout << "Group not found" << std::endl;
}

void Manager::removeMedia(std::string name){
    if(MediaMap.count(name)){ 
        MediaMap[name].reset();
        MediaMap.erase(name);
        for(auto &i : GroupMap){
            i.second->removeByName(name);  
        }
        return;
    }
    std::cout << "Media not found" << std::endl;
}
