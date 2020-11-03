# DirectoryAccessChecker
This is a project, which main purpose is to check if the directory is engaged by the program.

# Installation guide
You will need Cmake version 3.17 at least, and git.
When building *DirectoryAccessChecker*, the typical workflow starts with
```
git clone https://github.com/IliaIlyin/DirectoryAccessChecker.git
cd DirectoryAccessChecker
mkdir build
cd build
cmake ..
cmake --build .
```
To get the built executable file, write to command line:
```
cd Debug
```
Now, you are ready to run the program.

# Exploitation guide
Once you get the executable file, you can start using the project. The program accepts an absolute path to the directory and occupies it,
that is other instance of this program cannot use it, so the program terminates. If the directory with the input path does not exist,
DirectoryAccessor creates a new one. Pay attention:
**If the directory is locked, all of its subdirectories are locked, the opposite is not true.**

# Usage example
At first, consider a usage, when all of the input directories are blocked.
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
Second run of the program will be terminated automatically, because the first run blocked all of the *D:**\* subdirectories.
Happy usage!
