# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.1.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.1.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\C++\Codeforces\353A Domino"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\C++\Codeforces\353A Domino\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/353A_Domino.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/353A_Domino.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/353A_Domino.dir/flags.make

CMakeFiles/353A_Domino.dir/main.cpp.obj: CMakeFiles/353A_Domino.dir/flags.make
CMakeFiles/353A_Domino.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\C++\Codeforces\353A Domino\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/353A_Domino.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\353A_Domino.dir\main.cpp.obj -c "D:\C++\Codeforces\353A Domino\main.cpp"

CMakeFiles/353A_Domino.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/353A_Domino.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\C++\Codeforces\353A Domino\main.cpp" > CMakeFiles\353A_Domino.dir\main.cpp.i

CMakeFiles/353A_Domino.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/353A_Domino.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\C++\Codeforces\353A Domino\main.cpp" -o CMakeFiles\353A_Domino.dir\main.cpp.s

CMakeFiles/353A_Domino.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/353A_Domino.dir/main.cpp.obj.requires

CMakeFiles/353A_Domino.dir/main.cpp.obj.provides: CMakeFiles/353A_Domino.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\353A_Domino.dir\build.make CMakeFiles/353A_Domino.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/353A_Domino.dir/main.cpp.obj.provides

CMakeFiles/353A_Domino.dir/main.cpp.obj.provides.build: CMakeFiles/353A_Domino.dir/main.cpp.obj


# Object files for target 353A_Domino
353A_Domino_OBJECTS = \
"CMakeFiles/353A_Domino.dir/main.cpp.obj"

# External object files for target 353A_Domino
353A_Domino_EXTERNAL_OBJECTS =

353A_Domino.exe: CMakeFiles/353A_Domino.dir/main.cpp.obj
353A_Domino.exe: CMakeFiles/353A_Domino.dir/build.make
353A_Domino.exe: CMakeFiles/353A_Domino.dir/linklibs.rsp
353A_Domino.exe: CMakeFiles/353A_Domino.dir/objects1.rsp
353A_Domino.exe: CMakeFiles/353A_Domino.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\C++\Codeforces\353A Domino\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 353A_Domino.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\353A_Domino.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/353A_Domino.dir/build: 353A_Domino.exe

.PHONY : CMakeFiles/353A_Domino.dir/build

CMakeFiles/353A_Domino.dir/requires: CMakeFiles/353A_Domino.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/353A_Domino.dir/requires

CMakeFiles/353A_Domino.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\353A_Domino.dir\cmake_clean.cmake
.PHONY : CMakeFiles/353A_Domino.dir/clean

CMakeFiles/353A_Domino.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\C++\Codeforces\353A Domino" "D:\C++\Codeforces\353A Domino" "D:\C++\Codeforces\353A Domino\cmake-build-debug" "D:\C++\Codeforces\353A Domino\cmake-build-debug" "D:\C++\Codeforces\353A Domino\cmake-build-debug\CMakeFiles\353A_Domino.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/353A_Domino.dir/depend

