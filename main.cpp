#include <string>
#include <filesystem>
#include "Utils.h"
#include "Locker.h"

int main() {
  const std::string lockerName = "marker";
  std::string str_path = input();
  std::filesystem::path path = str_path;
  accessDirectory(path);
  if(!checkIfDirIsLocked(path,lockerName))
    return -5;
  std::filesystem::current_path(path);
  Locker locker(lockerName);
  system("PAUSE");
  return 0;
}
