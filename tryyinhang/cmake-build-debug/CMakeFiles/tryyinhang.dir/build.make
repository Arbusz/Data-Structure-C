# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.2.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.2.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\18742\CLionProjects\tryyinhang

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\18742\CLionProjects\tryyinhang\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/tryyinhang.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tryyinhang.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tryyinhang.dir/flags.make

CMakeFiles/tryyinhang.dir/main.cpp.obj: CMakeFiles/tryyinhang.dir/flags.make
CMakeFiles/tryyinhang.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\18742\CLionProjects\tryyinhang\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tryyinhang.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\tryyinhang.dir\main.cpp.obj -c C:\Users\18742\CLionProjects\tryyinhang\main.cpp

CMakeFiles/tryyinhang.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tryyinhang.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\18742\CLionProjects\tryyinhang\main.cpp > CMakeFiles\tryyinhang.dir\main.cpp.i

CMakeFiles/tryyinhang.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tryyinhang.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\18742\CLionProjects\tryyinhang\main.cpp -o CMakeFiles\tryyinhang.dir\main.cpp.s

CMakeFiles/tryyinhang.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/tryyinhang.dir/main.cpp.obj.requires

CMakeFiles/tryyinhang.dir/main.cpp.obj.provides: CMakeFiles/tryyinhang.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\tryyinhang.dir\build.make CMakeFiles/tryyinhang.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/tryyinhang.dir/main.cpp.obj.provides

CMakeFiles/tryyinhang.dir/main.cpp.obj.provides.build: CMakeFiles/tryyinhang.dir/main.cpp.obj


# Object files for target tryyinhang
tryyinhang_OBJECTS = \
"CMakeFiles/tryyinhang.dir/main.cpp.obj"

# External object files for target tryyinhang
tryyinhang_EXTERNAL_OBJECTS =

tryyinhang.exe: CMakeFiles/tryyinhang.dir/main.cpp.obj
tryyinhang.exe: CMakeFiles/tryyinhang.dir/build.make
tryyinhang.exe: CMakeFiles/tryyinhang.dir/linklibs.rsp
tryyinhang.exe: CMakeFiles/tryyinhang.dir/objects1.rsp
tryyinhang.exe: CMakeFiles/tryyinhang.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\18742\CLionProjects\tryyinhang\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tryyinhang.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\tryyinhang.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tryyinhang.dir/build: tryyinhang.exe

.PHONY : CMakeFiles/tryyinhang.dir/build

CMakeFiles/tryyinhang.dir/requires: CMakeFiles/tryyinhang.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/tryyinhang.dir/requires

CMakeFiles/tryyinhang.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\tryyinhang.dir\cmake_clean.cmake
.PHONY : CMakeFiles/tryyinhang.dir/clean

CMakeFiles/tryyinhang.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\18742\CLionProjects\tryyinhang C:\Users\18742\CLionProjects\tryyinhang C:\Users\18742\CLionProjects\tryyinhang\cmake-build-debug C:\Users\18742\CLionProjects\tryyinhang\cmake-build-debug C:\Users\18742\CLionProjects\tryyinhang\cmake-build-debug\CMakeFiles\tryyinhang.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tryyinhang.dir/depend

