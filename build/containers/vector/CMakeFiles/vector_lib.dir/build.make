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
include containers/vector/CMakeFiles/vector_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include containers/vector/CMakeFiles/vector_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include containers/vector/CMakeFiles/vector_lib.dir/progress.make

# Include the compile flags for this target's objects.
include containers/vector/CMakeFiles/vector_lib.dir/flags.make

containers/vector/CMakeFiles/vector_lib.dir/vector.cpp.o: containers/vector/CMakeFiles/vector_lib.dir/flags.make
containers/vector/CMakeFiles/vector_lib.dir/vector.cpp.o: /Users/ilyat/Desktop/cpp_STL/containers/vector/vector.cpp
containers/vector/CMakeFiles/vector_lib.dir/vector.cpp.o: containers/vector/CMakeFiles/vector_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ilyat/Desktop/cpp_STL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object containers/vector/CMakeFiles/vector_lib.dir/vector.cpp.o"
	cd /Users/ilyat/Desktop/cpp_STL/build/containers/vector && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT containers/vector/CMakeFiles/vector_lib.dir/vector.cpp.o -MF CMakeFiles/vector_lib.dir/vector.cpp.o.d -o CMakeFiles/vector_lib.dir/vector.cpp.o -c /Users/ilyat/Desktop/cpp_STL/containers/vector/vector.cpp

containers/vector/CMakeFiles/vector_lib.dir/vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/vector_lib.dir/vector.cpp.i"
	cd /Users/ilyat/Desktop/cpp_STL/build/containers/vector && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ilyat/Desktop/cpp_STL/containers/vector/vector.cpp > CMakeFiles/vector_lib.dir/vector.cpp.i

containers/vector/CMakeFiles/vector_lib.dir/vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/vector_lib.dir/vector.cpp.s"
	cd /Users/ilyat/Desktop/cpp_STL/build/containers/vector && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ilyat/Desktop/cpp_STL/containers/vector/vector.cpp -o CMakeFiles/vector_lib.dir/vector.cpp.s

# Object files for target vector_lib
vector_lib_OBJECTS = \
"CMakeFiles/vector_lib.dir/vector.cpp.o"

# External object files for target vector_lib
vector_lib_EXTERNAL_OBJECTS =

containers/vector/libvector_lib.a: containers/vector/CMakeFiles/vector_lib.dir/vector.cpp.o
containers/vector/libvector_lib.a: containers/vector/CMakeFiles/vector_lib.dir/build.make
containers/vector/libvector_lib.a: containers/vector/CMakeFiles/vector_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/ilyat/Desktop/cpp_STL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libvector_lib.a"
	cd /Users/ilyat/Desktop/cpp_STL/build/containers/vector && $(CMAKE_COMMAND) -P CMakeFiles/vector_lib.dir/cmake_clean_target.cmake
	cd /Users/ilyat/Desktop/cpp_STL/build/containers/vector && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vector_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
containers/vector/CMakeFiles/vector_lib.dir/build: containers/vector/libvector_lib.a
.PHONY : containers/vector/CMakeFiles/vector_lib.dir/build

containers/vector/CMakeFiles/vector_lib.dir/clean:
	cd /Users/ilyat/Desktop/cpp_STL/build/containers/vector && $(CMAKE_COMMAND) -P CMakeFiles/vector_lib.dir/cmake_clean.cmake
.PHONY : containers/vector/CMakeFiles/vector_lib.dir/clean

containers/vector/CMakeFiles/vector_lib.dir/depend:
	cd /Users/ilyat/Desktop/cpp_STL/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ilyat/Desktop/cpp_STL /Users/ilyat/Desktop/cpp_STL/containers/vector /Users/ilyat/Desktop/cpp_STL/build /Users/ilyat/Desktop/cpp_STL/build/containers/vector /Users/ilyat/Desktop/cpp_STL/build/containers/vector/CMakeFiles/vector_lib.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : containers/vector/CMakeFiles/vector_lib.dir/depend

