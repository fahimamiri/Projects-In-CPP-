# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/fahimamiri/currency converter"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/fahimamiri/currency converter/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/currency_converter.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/currency_converter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/currency_converter.dir/flags.make

CMakeFiles/currency_converter.dir/main.cpp.o: CMakeFiles/currency_converter.dir/flags.make
CMakeFiles/currency_converter.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/fahimamiri/currency converter/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/currency_converter.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/currency_converter.dir/main.cpp.o -c "/Users/fahimamiri/currency converter/main.cpp"

CMakeFiles/currency_converter.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/currency_converter.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/fahimamiri/currency converter/main.cpp" > CMakeFiles/currency_converter.dir/main.cpp.i

CMakeFiles/currency_converter.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/currency_converter.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/fahimamiri/currency converter/main.cpp" -o CMakeFiles/currency_converter.dir/main.cpp.s

# Object files for target currency_converter
currency_converter_OBJECTS = \
"CMakeFiles/currency_converter.dir/main.cpp.o"

# External object files for target currency_converter
currency_converter_EXTERNAL_OBJECTS =

currency_converter: CMakeFiles/currency_converter.dir/main.cpp.o
currency_converter: CMakeFiles/currency_converter.dir/build.make
currency_converter: CMakeFiles/currency_converter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/fahimamiri/currency converter/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable currency_converter"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/currency_converter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/currency_converter.dir/build: currency_converter
.PHONY : CMakeFiles/currency_converter.dir/build

CMakeFiles/currency_converter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/currency_converter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/currency_converter.dir/clean

CMakeFiles/currency_converter.dir/depend:
	cd "/Users/fahimamiri/currency converter/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/fahimamiri/currency converter" "/Users/fahimamiri/currency converter" "/Users/fahimamiri/currency converter/cmake-build-debug" "/Users/fahimamiri/currency converter/cmake-build-debug" "/Users/fahimamiri/currency converter/cmake-build-debug/CMakeFiles/currency_converter.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/currency_converter.dir/depend
