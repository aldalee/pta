# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\WorkSpace\Algorithm\algorithm\pat

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\WorkSpace\Algorithm\algorithm\pat\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/b1087.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/b1087.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/b1087.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/b1087.dir/flags.make

CMakeFiles/b1087.dir/BasicLevel/Code1087.cpp.obj: CMakeFiles/b1087.dir/flags.make
CMakeFiles/b1087.dir/BasicLevel/Code1087.cpp.obj: ../BasicLevel/Code1087.cpp
CMakeFiles/b1087.dir/BasicLevel/Code1087.cpp.obj: CMakeFiles/b1087.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\WorkSpace\Algorithm\algorithm\pat\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/b1087.dir/BasicLevel/Code1087.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/b1087.dir/BasicLevel/Code1087.cpp.obj -MF CMakeFiles\b1087.dir\BasicLevel\Code1087.cpp.obj.d -o CMakeFiles\b1087.dir\BasicLevel\Code1087.cpp.obj -c D:\WorkSpace\Algorithm\algorithm\pat\BasicLevel\Code1087.cpp

CMakeFiles/b1087.dir/BasicLevel/Code1087.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/b1087.dir/BasicLevel/Code1087.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\WorkSpace\Algorithm\algorithm\pat\BasicLevel\Code1087.cpp > CMakeFiles\b1087.dir\BasicLevel\Code1087.cpp.i

CMakeFiles/b1087.dir/BasicLevel/Code1087.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/b1087.dir/BasicLevel/Code1087.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\WorkSpace\Algorithm\algorithm\pat\BasicLevel\Code1087.cpp -o CMakeFiles\b1087.dir\BasicLevel\Code1087.cpp.s

# Object files for target b1087
b1087_OBJECTS = \
"CMakeFiles/b1087.dir/BasicLevel/Code1087.cpp.obj"

# External object files for target b1087
b1087_EXTERNAL_OBJECTS =

b1087.exe: CMakeFiles/b1087.dir/BasicLevel/Code1087.cpp.obj
b1087.exe: CMakeFiles/b1087.dir/build.make
b1087.exe: CMakeFiles/b1087.dir/linklibs.rsp
b1087.exe: CMakeFiles/b1087.dir/objects1.rsp
b1087.exe: CMakeFiles/b1087.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\WorkSpace\Algorithm\algorithm\pat\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable b1087.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\b1087.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/b1087.dir/build: b1087.exe
.PHONY : CMakeFiles/b1087.dir/build

CMakeFiles/b1087.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\b1087.dir\cmake_clean.cmake
.PHONY : CMakeFiles/b1087.dir/clean

CMakeFiles/b1087.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\WorkSpace\Algorithm\algorithm\pat D:\WorkSpace\Algorithm\algorithm\pat D:\WorkSpace\Algorithm\algorithm\pat\cmake-build-debug D:\WorkSpace\Algorithm\algorithm\pat\cmake-build-debug D:\WorkSpace\Algorithm\algorithm\pat\cmake-build-debug\CMakeFiles\b1087.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/b1087.dir/depend

