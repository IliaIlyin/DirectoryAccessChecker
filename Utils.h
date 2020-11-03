//
// Created by Ilya on 11/2/2020.
//

#ifndef DIRECTORYACCESSOR__UTILS_H_
#define DIRECTORYACCESSOR__UTILS_H_


#include <string>
#include <iostream>
#include <filesystem>

/*
 * free function to input absolute directory path.
 *
 * @return string that represents user input/
 */
std::string input();

/*
 * free function to check if the directory exists.
 * If the directory does not exist, it creates a new one.
 */

void accessDirectory(std::filesystem::path path);

/*
 * free function to iterate through the directory and check if it contains a file with a specific name.
 *
 * @param path path of the directory to look through.
 * @param lockerName name of the file to look for.
 *
 * @return true, if the file was not found.
 * @return false, otherwise.
 */

bool iterateDirectoryFindMarker(std::filesystem::path path, const std::string& lockerName);

/*
 * free function to iterate up through the directory hierarchy and check if it contains a file with a specific name.
 *
 * @param path path of the directory to begin with to look through.
 * @param lockerName name of the file to look for.
 *
 * @return true, if the file was not found.
 * @return false, otherwise.
 */

bool checkIfDirIsLocked(std::filesystem::path path,const std::string& lockerName);

#endif //DIRECTORYACCESSOR__UTILS_H_
