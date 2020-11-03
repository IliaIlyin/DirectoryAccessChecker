//
// Created by Ilya on 11/2/2020.
//

#include "Locker.h"
Locker::Locker(const std::string& file_name) : file_name_(file_name){
  try {
    std::ofstream file(file_name_);
  }
  catch (...) {
      return;
  }
}
Locker::~Locker() {
  remove(file_name_.c_str());
}
