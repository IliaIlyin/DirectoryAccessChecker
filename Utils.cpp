//
// Created by Ilya on 11/2/2020.
//

#include "Utils.h"

std::string input(){
  std::string str;
  std::getline(std::cin,str);
  return str;
}

void accessDirectory(std::filesystem::path path){
  if (!std::filesystem::exists(path))
    std::filesystem::create_directory(path);
}

bool iterateDirectoryFindMarker(std::filesystem::path path, const std::string& lockerName){
  std::string str = path.string();
  for (auto &p: std::filesystem::directory_iterator(path)) {
    if (p.path().has_filename() && p.path().filename() == lockerName) {
      return false;
    }
  }
  return true;
}

bool checkIfDirIsLocked(std::filesystem::path path,const std::string& lockerName){
  std::filesystem::current_path(path);
  while (std::filesystem::current_path().has_relative_path()) {
    if (!iterateDirectoryFindMarker(path, "marker"))
        return false;
    std::filesystem::current_path(std::filesystem::current_path().parent_path());
  }
  return iterateDirectoryFindMarker(std::filesystem::current_path(), "marker");
}