# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.28.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.28.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ilyat/Desktop/cpp_STL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ilyat/Desktop/cpp_STL/build

# Include any dependencies generated for this target.
include containers/vector/CMakeFiles/vector_main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include containers/vector/CMakeFiles/vector_main.dir/compiler_depend.make

# Include the progress variables for this target.
include containers/vector/CMakeFiles/vector_main.dir/progress.make

# Include the compile flags for this target's objects.
include containers/vector/CMakeFiles/vector_main.dir/flags.make

containers/vector/CMakeFiles/vector_main.dir/__/__/main.cpp.o: containers/vector/CMakeFiles/vector_main.dir/flags.make
containers/vector/CMakeFiles/vector_main.dir/__/__/main.cpp.o: /Users/ilyat/Desktop/cpp_STL/main.cpp
containers/vector/CMakeFiles/vector_main.dir/__/__/main.cpp.o: containers/vector/CMakeFiles/vector_main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ilyat/Desktop/cpp_STL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object containers/vector/CMakeFiles/vector_main.dir/__/__/main.cpp.o"
	cd /Users/ilyat/Desktop/cpp_STL/build/containers/vector && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT containers/vector/CMakeFiles/vector_main.dir/__/__/main.cpp.o -MF CMakeFiles/vector_main.dir/__/__/main.cpp.o.d -o CMakeFiles/vector_main.dir/__/__/main.cpp.o -c /Users/ilyat/Desktop/cpp_STL/main.cpp

containers/vector/CMakeFiles/vector_main.dir/__/__/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/vector_main.dir/__/__/main.cpp.i"
	cd /Users/ilyat/Desktop/cpp_STL/build/containers/vector && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ilyat/Desktop/cpp_STL/main.cpp > CMakeFiles/vector_main.dir/__/__/main.cpp.i

containers/vector/CMakeFiles/vector_main.dir/__/__/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/vector_main.dir/__/__/main.cpp.s"
	cd /Users/ilyat/Desktop/cpp_STL/build/containers/vector && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ilyat/Desktop/cpp_STL/main.cpp -o CMakeFiles/vector_main.dir/__/__/main.cpp.s

# Object files for target vector_main
vector_main_OBJECTS = \
"CMakeFiles/vector_main.dir/__/__/main.cpp.o"

# External object files for target vector_main
vector_main_EXTERNAL_OBJECTS =

containers/vector/vector_main: containers/vector/CMakeFiles/vector_main.dir/__/__/main.cpp.o
containers/vector/vector_main: containers/vector/CMakeFiles/vector_main.dir/build.make
containers/vector/vector_main: containers/vector/libvector_lib.a
containers/vector/vector_main: containers/vector/CMakeFiles/vector_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/ilyat/Desktop/cpp_STL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable vector_main"
	cd /Users/ilyat/Desktop/cpp_STL/build/containers/vector && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vector_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
containers/vector/CMakeFiles/vector_main.dir/build: containers/vector/vector_main
.PHONY : containers/vector/CMakeFiles/vector_main.dir/build

containers/vector/CMakeFiles/vector_main.dir/clean:
	cd /Users/ilyat/Desktop/cpp_STL/build/containers/vector && $(CMAKE_COMMAND) -P CMakeFiles/vector_main.dir/cmake_clean.cmake
.PHONY : containers/vector/CMakeFiles/vector_main.dir/clean

containers/vector/CMakeFiles/vector_main.dir/depend:
	cd /Users/ilyat/Desktop/cpp_STL/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ilyat/Desktop/cpp_STL /Users/ilyat/Desktop/cpp_STL/containers/vector /Users/ilyat/Desktop/cpp_STL/build /Users/ilyat/Desktop/cpp_STL/build/containers/vector /Users/ilyat/Desktop/cpp_STL/build/containers/vector/CMakeFiles/vector_main.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : containers/vector/CMakeFiles/vector_main.dir/depend

