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
include containers/bst/CMakeFiles/bst_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include containers/bst/CMakeFiles/bst_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include containers/bst/CMakeFiles/bst_lib.dir/progress.make

# Include the compile flags for this target's objects.
include containers/bst/CMakeFiles/bst_lib.dir/flags.make

containers/bst/CMakeFiles/bst_lib.dir/bst.cpp.o: containers/bst/CMakeFiles/bst_lib.dir/flags.make
containers/bst/CMakeFiles/bst_lib.dir/bst.cpp.o: /Users/ilyat/Desktop/cpp_STL/containers/bst/bst.cpp
containers/bst/CMakeFiles/bst_lib.dir/bst.cpp.o: containers/bst/CMakeFiles/bst_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ilyat/Desktop/cpp_STL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object containers/bst/CMakeFiles/bst_lib.dir/bst.cpp.o"
	cd /Users/ilyat/Desktop/cpp_STL/build/containers/bst && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT containers/bst/CMakeFiles/bst_lib.dir/bst.cpp.o -MF CMakeFiles/bst_lib.dir/bst.cpp.o.d -o CMakeFiles/bst_lib.dir/bst.cpp.o -c /Users/ilyat/Desktop/cpp_STL/containers/bst/bst.cpp

containers/bst/CMakeFiles/bst_lib.dir/bst.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/bst_lib.dir/bst.cpp.i"
	cd /Users/ilyat/Desktop/cpp_STL/build/containers/bst && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ilyat/Desktop/cpp_STL/containers/bst/bst.cpp > CMakeFiles/bst_lib.dir/bst.cpp.i

containers/bst/CMakeFiles/bst_lib.dir/bst.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/bst_lib.dir/bst.cpp.s"
	cd /Users/ilyat/Desktop/cpp_STL/build/containers/bst && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ilyat/Desktop/cpp_STL/containers/bst/bst.cpp -o CMakeFiles/bst_lib.dir/bst.cpp.s

# Object files for target bst_lib
bst_lib_OBJECTS = \
"CMakeFiles/bst_lib.dir/bst.cpp.o"

# External object files for target bst_lib
bst_lib_EXTERNAL_OBJECTS =

containers/bst/libbst_lib.a: containers/bst/CMakeFiles/bst_lib.dir/bst.cpp.o
containers/bst/libbst_lib.a: containers/bst/CMakeFiles/bst_lib.dir/build.make
containers/bst/libbst_lib.a: containers/bst/CMakeFiles/bst_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/ilyat/Desktop/cpp_STL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libbst_lib.a"
	cd /Users/ilyat/Desktop/cpp_STL/build/containers/bst && $(CMAKE_COMMAND) -P CMakeFiles/bst_lib.dir/cmake_clean_target.cmake
	cd /Users/ilyat/Desktop/cpp_STL/build/containers/bst && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bst_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
containers/bst/CMakeFiles/bst_lib.dir/build: containers/bst/libbst_lib.a
.PHONY : containers/bst/CMakeFiles/bst_lib.dir/build

containers/bst/CMakeFiles/bst_lib.dir/clean:
	cd /Users/ilyat/Desktop/cpp_STL/build/containers/bst && $(CMAKE_COMMAND) -P CMakeFiles/bst_lib.dir/cmake_clean.cmake
.PHONY : containers/bst/CMakeFiles/bst_lib.dir/clean

containers/bst/CMakeFiles/bst_lib.dir/depend:
	cd /Users/ilyat/Desktop/cpp_STL/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ilyat/Desktop/cpp_STL /Users/ilyat/Desktop/cpp_STL/containers/bst /Users/ilyat/Desktop/cpp_STL/build /Users/ilyat/Desktop/cpp_STL/build/containers/bst /Users/ilyat/Desktop/cpp_STL/build/containers/bst/CMakeFiles/bst_lib.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : containers/bst/CMakeFiles/bst_lib.dir/depend

