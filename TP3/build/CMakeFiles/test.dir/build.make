# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /var/cmake-3.27.6/bin/cmake

# The command to remove a file.
RM = /var/cmake-3.27.6/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Ecole/3A_ISIMA/C++/TP/TP3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Ecole/3A_ISIMA/C++/TP/TP3/build

# Include any dependencies generated for this target.
include CMakeFiles/test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test.dir/flags.make

CMakeFiles/test.dir/test/catch.cpp.o: CMakeFiles/test.dir/flags.make
CMakeFiles/test.dir/test/catch.cpp.o: /mnt/c/Ecole/3A_ISIMA/C++/TP/TP3/test/catch.cpp
CMakeFiles/test.dir/test/catch.cpp.o: CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/mnt/c/Ecole/3A_ISIMA/C++/TP/TP3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test.dir/test/catch.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test.dir/test/catch.cpp.o -MF CMakeFiles/test.dir/test/catch.cpp.o.d -o CMakeFiles/test.dir/test/catch.cpp.o -c /mnt/c/Ecole/3A_ISIMA/C++/TP/TP3/test/catch.cpp

CMakeFiles/test.dir/test/catch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test.dir/test/catch.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Ecole/3A_ISIMA/C++/TP/TP3/test/catch.cpp > CMakeFiles/test.dir/test/catch.cpp.i

CMakeFiles/test.dir/test/catch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test.dir/test/catch.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Ecole/3A_ISIMA/C++/TP/TP3/test/catch.cpp -o CMakeFiles/test.dir/test/catch.cpp.s

test: CMakeFiles/test.dir/test/catch.cpp.o
test: CMakeFiles/test.dir/build.make
.PHONY : test

# Rule to build all files generated by this target.
CMakeFiles/test.dir/build: test
.PHONY : CMakeFiles/test.dir/build

CMakeFiles/test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test.dir/clean

CMakeFiles/test.dir/depend:
	cd /mnt/c/Ecole/3A_ISIMA/C++/TP/TP3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Ecole/3A_ISIMA/C++/TP/TP3 /mnt/c/Ecole/3A_ISIMA/C++/TP/TP3 /mnt/c/Ecole/3A_ISIMA/C++/TP/TP3/build /mnt/c/Ecole/3A_ISIMA/C++/TP/TP3/build /mnt/c/Ecole/3A_ISIMA/C++/TP/TP3/build/CMakeFiles/test.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/test.dir/depend

