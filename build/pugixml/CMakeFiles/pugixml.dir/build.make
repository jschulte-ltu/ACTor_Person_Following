# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mpleune/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mpleune/catkin_ws/build

# Include any dependencies generated for this target.
include pugixml/CMakeFiles/pugixml.dir/depend.make

# Include the progress variables for this target.
include pugixml/CMakeFiles/pugixml.dir/progress.make

# Include the compile flags for this target's objects.
include pugixml/CMakeFiles/pugixml.dir/flags.make

pugixml/CMakeFiles/pugixml.dir/src/sources/pugixml.cpp.o: pugixml/CMakeFiles/pugixml.dir/flags.make
pugixml/CMakeFiles/pugixml.dir/src/sources/pugixml.cpp.o: /home/mpleune/catkin_ws/src/pugixml/src/sources/pugixml.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mpleune/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object pugixml/CMakeFiles/pugixml.dir/src/sources/pugixml.cpp.o"
	cd /home/mpleune/catkin_ws/build/pugixml && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pugixml.dir/src/sources/pugixml.cpp.o -c /home/mpleune/catkin_ws/src/pugixml/src/sources/pugixml.cpp

pugixml/CMakeFiles/pugixml.dir/src/sources/pugixml.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pugixml.dir/src/sources/pugixml.cpp.i"
	cd /home/mpleune/catkin_ws/build/pugixml && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mpleune/catkin_ws/src/pugixml/src/sources/pugixml.cpp > CMakeFiles/pugixml.dir/src/sources/pugixml.cpp.i

pugixml/CMakeFiles/pugixml.dir/src/sources/pugixml.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pugixml.dir/src/sources/pugixml.cpp.s"
	cd /home/mpleune/catkin_ws/build/pugixml && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mpleune/catkin_ws/src/pugixml/src/sources/pugixml.cpp -o CMakeFiles/pugixml.dir/src/sources/pugixml.cpp.s

pugixml/CMakeFiles/pugixml.dir/src/sources/pugixml.cpp.o.requires:

.PHONY : pugixml/CMakeFiles/pugixml.dir/src/sources/pugixml.cpp.o.requires

pugixml/CMakeFiles/pugixml.dir/src/sources/pugixml.cpp.o.provides: pugixml/CMakeFiles/pugixml.dir/src/sources/pugixml.cpp.o.requires
	$(MAKE) -f pugixml/CMakeFiles/pugixml.dir/build.make pugixml/CMakeFiles/pugixml.dir/src/sources/pugixml.cpp.o.provides.build
.PHONY : pugixml/CMakeFiles/pugixml.dir/src/sources/pugixml.cpp.o.provides

pugixml/CMakeFiles/pugixml.dir/src/sources/pugixml.cpp.o.provides.build: pugixml/CMakeFiles/pugixml.dir/src/sources/pugixml.cpp.o


# Object files for target pugixml
pugixml_OBJECTS = \
"CMakeFiles/pugixml.dir/src/sources/pugixml.cpp.o"

# External object files for target pugixml
pugixml_EXTERNAL_OBJECTS =

/home/mpleune/catkin_ws/devel/lib/libpugixml.so: pugixml/CMakeFiles/pugixml.dir/src/sources/pugixml.cpp.o
/home/mpleune/catkin_ws/devel/lib/libpugixml.so: pugixml/CMakeFiles/pugixml.dir/build.make
/home/mpleune/catkin_ws/devel/lib/libpugixml.so: pugixml/CMakeFiles/pugixml.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mpleune/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library /home/mpleune/catkin_ws/devel/lib/libpugixml.so"
	cd /home/mpleune/catkin_ws/build/pugixml && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pugixml.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
pugixml/CMakeFiles/pugixml.dir/build: /home/mpleune/catkin_ws/devel/lib/libpugixml.so

.PHONY : pugixml/CMakeFiles/pugixml.dir/build

pugixml/CMakeFiles/pugixml.dir/requires: pugixml/CMakeFiles/pugixml.dir/src/sources/pugixml.cpp.o.requires

.PHONY : pugixml/CMakeFiles/pugixml.dir/requires

pugixml/CMakeFiles/pugixml.dir/clean:
	cd /home/mpleune/catkin_ws/build/pugixml && $(CMAKE_COMMAND) -P CMakeFiles/pugixml.dir/cmake_clean.cmake
.PHONY : pugixml/CMakeFiles/pugixml.dir/clean

pugixml/CMakeFiles/pugixml.dir/depend:
	cd /home/mpleune/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mpleune/catkin_ws/src /home/mpleune/catkin_ws/src/pugixml /home/mpleune/catkin_ws/build /home/mpleune/catkin_ws/build/pugixml /home/mpleune/catkin_ws/build/pugixml/CMakeFiles/pugixml.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : pugixml/CMakeFiles/pugixml.dir/depend

