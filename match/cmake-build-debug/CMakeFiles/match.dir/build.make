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
CMAKE_SOURCE_DIR = C:\Users\18742\CLionProjects\match

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\18742\CLionProjects\match\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/match.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/match.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/match.dir/flags.make

CMakeFiles/match.dir/main.cpp.obj: CMakeFiles/match.dir/flags.make
CMakeFiles/match.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\18742\CLionProjects\match\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/match.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\match.dir\main.cpp.obj -c C:\Users\18742\CLionProjects\match\main.cpp

CMakeFiles/match.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/match.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\18742\CLionProjects\match\main.cpp > CMakeFiles\match.dir\main.cpp.i

CMakeFiles/match.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/match.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\18742\CLionProjects\match\main.cpp -o CMakeFiles\match.dir\main.cpp.s

CMakeFiles/match.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/match.dir/main.cpp.obj.requires

CMakeFiles/match.dir/main.cpp.obj.provides: CMakeFiles/match.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\match.dir\build.make CMakeFiles/match.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/match.dir/main.cpp.obj.provides

CMakeFiles/match.dir/main.cpp.obj.provides.build: CMakeFiles/match.dir/main.cpp.obj


# Object files for target match
match_OBJECTS = \
"CMakeFiles/match.dir/main.cpp.obj"

# External object files for target match
match_EXTERNAL_OBJECTS =

match.exe: CMakeFiles/match.dir/main.cpp.obj
match.exe: CMakeFiles/match.dir/build.make
match.exe: CMakeFiles/match.dir/linklibs.rsp
match.exe: CMakeFiles/match.dir/objects1.rsp
match.exe: CMakeFiles/match.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\18742\CLionProjects\match\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable match.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\match.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/match.dir/build: match.exe

.PHONY : CMakeFiles/match.dir/build

CMakeFiles/match.dir/requires: CMakeFiles/match.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/match.dir/requires

CMakeFiles/match.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\match.dir\cmake_clean.cmake
.PHONY : CMakeFiles/match.dir/clean

CMakeFiles/match.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\18742\CLionProjects\match C:\Users\18742\CLionProjects\match C:\Users\18742\CLionProjects\match\cmake-build-debug C:\Users\18742\CLionProjects\match\cmake-build-debug C:\Users\18742\CLionProjects\match\cmake-build-debug\CMakeFiles\match.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/match.dir/depend

