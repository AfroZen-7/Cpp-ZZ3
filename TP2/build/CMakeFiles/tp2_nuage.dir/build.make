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
CMAKE_SOURCE_DIR = /mnt/c/Ecole/3A_ISIMA/C++/TP/TP2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Ecole/3A_ISIMA/C++/TP/TP2/build

# Include any dependencies generated for this target.
include CMakeFiles/tp2_nuage.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tp2_nuage.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tp2_nuage.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tp2_nuage.dir/flags.make

CMakeFiles/tp2_nuage.dir/src/main_nuage.cpp.o: CMakeFiles/tp2_nuage.dir/flags.make
CMakeFiles/tp2_nuage.dir/src/main_nuage.cpp.o: /mnt/c/Ecole/3A_ISIMA/C++/TP/TP2/src/main_nuage.cpp
CMakeFiles/tp2_nuage.dir/src/main_nuage.cpp.o: CMakeFiles/tp2_nuage.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/mnt/c/Ecole/3A_ISIMA/C++/TP/TP2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tp2_nuage.dir/src/main_nuage.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp2_nuage.dir/src/main_nuage.cpp.o -MF CMakeFiles/tp2_nuage.dir/src/main_nuage.cpp.o.d -o CMakeFiles/tp2_nuage.dir/src/main_nuage.cpp.o -c /mnt/c/Ecole/3A_ISIMA/C++/TP/TP2/src/main_nuage.cpp

CMakeFiles/tp2_nuage.dir/src/main_nuage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp2_nuage.dir/src/main_nuage.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Ecole/3A_ISIMA/C++/TP/TP2/src/main_nuage.cpp > CMakeFiles/tp2_nuage.dir/src/main_nuage.cpp.i

CMakeFiles/tp2_nuage.dir/src/main_nuage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp2_nuage.dir/src/main_nuage.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Ecole/3A_ISIMA/C++/TP/TP2/src/main_nuage.cpp -o CMakeFiles/tp2_nuage.dir/src/main_nuage.cpp.s

# Object files for target tp2_nuage
tp2_nuage_OBJECTS = \
"CMakeFiles/tp2_nuage.dir/src/main_nuage.cpp.o"

# External object files for target tp2_nuage
tp2_nuage_EXTERNAL_OBJECTS = \
"/mnt/c/Ecole/3A_ISIMA/C++/TP/TP2/build/CMakeFiles/common.dir/src/cartesien.cpp.o" \
"/mnt/c/Ecole/3A_ISIMA/C++/TP/TP2/build/CMakeFiles/common.dir/src/point.cpp.o" \
"/mnt/c/Ecole/3A_ISIMA/C++/TP/TP2/build/CMakeFiles/common.dir/src/polaire.cpp.o"

tp2_nuage: CMakeFiles/tp2_nuage.dir/src/main_nuage.cpp.o
tp2_nuage: CMakeFiles/common.dir/src/cartesien.cpp.o
tp2_nuage: CMakeFiles/common.dir/src/point.cpp.o
tp2_nuage: CMakeFiles/common.dir/src/polaire.cpp.o
tp2_nuage: CMakeFiles/tp2_nuage.dir/build.make
tp2_nuage: CMakeFiles/tp2_nuage.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/mnt/c/Ecole/3A_ISIMA/C++/TP/TP2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tp2_nuage"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tp2_nuage.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tp2_nuage.dir/build: tp2_nuage
.PHONY : CMakeFiles/tp2_nuage.dir/build

CMakeFiles/tp2_nuage.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tp2_nuage.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tp2_nuage.dir/clean

CMakeFiles/tp2_nuage.dir/depend:
	cd /mnt/c/Ecole/3A_ISIMA/C++/TP/TP2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Ecole/3A_ISIMA/C++/TP/TP2 /mnt/c/Ecole/3A_ISIMA/C++/TP/TP2 /mnt/c/Ecole/3A_ISIMA/C++/TP/TP2/build /mnt/c/Ecole/3A_ISIMA/C++/TP/TP2/build /mnt/c/Ecole/3A_ISIMA/C++/TP/TP2/build/CMakeFiles/tp2_nuage.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/tp2_nuage.dir/depend

