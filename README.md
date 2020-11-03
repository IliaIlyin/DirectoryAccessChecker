# DirectoryAccessChecker
This is a project, whose main purpose is to check if the directory is engaged by the program.

# Installation guide
You will need Cmake version 3.17 at least, and git.
When building *DirectoryAccessChecker*, the typical workflow starts with:
```
git clone https://github.com/IliaIlyin/DirectoryAccessChecker.git
cd DirectoryAccessChecker
mkdir build
cd build
cmake ..
cmake --build .
```
To get the built executable file, write to the command line:
```
cd Debug
```
Now, you are ready to run the program.

# Exploitation guide
Once you get the executable file, you can start using the project. The program accepts an absolute path to the directory and occupies it,
so that another instance of this program cannot use it, as the program terminates. If the directory with the input path does not exist 
DirectoryAccessor creates a new one. Attention:
**If the directory is locked, all subdirectories are locked too, the reverse is not true.**

# Usage example
Firstly, consider the input, if all input directories are blocked.
```
first run of DirectoryAccesor.exe
Your input *D:\zanuda*
second run of DirectoryAccesor.exe
Your input *D:\*
```
**But** 
```
first run of DirectoryAccesor.exe
Your input *D:\*
second run of DirectoryAccesor.exe
Your input *D:\zanuda*
```
Second run of the program will terminate automatically, as the first run blocks all D:\ subdirectories.
Happy usage!
