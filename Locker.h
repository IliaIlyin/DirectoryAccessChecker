//
// Created by Ilya on 11/2/2020.
//

#ifndef DIRECTORYACCESSOR__LOCKER_H_
#define DIRECTORYACCESSOR__LOCKER_H_
#include <string>
#include <iostream>
#include <fstream>
/*
 * class that creates a file with a specific name
 *
 * @author Ilya Ilyin
 */
class Locker {
 public:

  /*
   * constructor that creates a file with the input name
   *
   * @param file_name name of the file to create
   *
   */

  Locker(const std::string& file_name);

  /*
   * cannot copy lockers
   */

  Locker(Locker& b)=delete;

  /*
   * removes the file
   */
  ~Locker();

 private:
  std::string file_name_;
};

#endif //DIRECTORYACCESSOR__LOCKER_H_
