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
CMAKE_SOURCE_DIR = C:\Users\18742\CLionProjects\p80_17_Strcmp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\18742\CLionProjects\p80_17_Strcmp\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/p80_17_Strcmp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/p80_17_Strcmp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/p80_17_Strcmp.dir/flags.make

CMakeFiles/p80_17_Strcmp.dir/main.cpp.obj: CMakeFiles/p80_17_Strcmp.dir/flags.make
CMakeFiles/p80_17_Strcmp.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\18742\CLionProjects\p80_17_Strcmp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/p80_17_Strcmp.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\p80_17_Strcmp.dir\main.cpp.obj -c C:\Users\18742\CLionProjects\p80_17_Strcmp\main.cpp

CMakeFiles/p80_17_Strcmp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p80_17_Strcmp.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\18742\CLionProjects\p80_17_Strcmp\main.cpp > CMakeFiles\p80_17_Strcmp.dir\main.cpp.i

CMakeFiles/p80_17_Strcmp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p80_17_Strcmp.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\18742\CLionProjects\p80_17_Strcmp\main.cpp -o CMakeFiles\p80_17_Strcmp.dir\main.cpp.s

CMakeFiles/p80_17_Strcmp.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/p80_17_Strcmp.dir/main.cpp.obj.requires

CMakeFiles/p80_17_Strcmp.dir/main.cpp.obj.provides: CMakeFiles/p80_17_Strcmp.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\p80_17_Strcmp.dir\build.make CMakeFiles/p80_17_Strcmp.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/p80_17_Strcmp.dir/main.cpp.obj.provides

CMakeFiles/p80_17_Strcmp.dir/main.cpp.obj.provides.build: CMakeFiles/p80_17_Strcmp.dir/main.cpp.obj


# Object files for target p80_17_Strcmp
p80_17_Strcmp_OBJECTS = \
"CMakeFiles/p80_17_Strcmp.dir/main.cpp.obj"

# External object files for target p80_17_Strcmp
p80_17_Strcmp_EXTERNAL_OBJECTS =

p80_17_Strcmp.exe: CMakeFiles/p80_17_Strcmp.dir/main.cpp.obj
p80_17_Strcmp.exe: CMakeFiles/p80_17_Strcmp.dir/build.make
p80_17_Strcmp.exe: CMakeFiles/p80_17_Strcmp.dir/linklibs.rsp
p80_17_Strcmp.exe: CMakeFiles/p80_17_Strcmp.dir/objects1.rsp
p80_17_Strcmp.exe: CMakeFiles/p80_17_Strcmp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\18742\CLionProjects\p80_17_Strcmp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable p80_17_Strcmp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\p80_17_Strcmp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/p80_17_Strcmp.dir/build: p80_17_Strcmp.exe

.PHONY : CMakeFiles/p80_17_Strcmp.dir/build

CMakeFiles/p80_17_Strcmp.dir/requires: CMakeFiles/p80_17_Strcmp.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/p80_17_Strcmp.dir/requires

CMakeFiles/p80_17_Strcmp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\p80_17_Strcmp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/p80_17_Strcmp.dir/clean

CMakeFiles/p80_17_Strcmp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\18742\CLionProjects\p80_17_Strcmp C:\Users\18742\CLionProjects\p80_17_Strcmp C:\Users\18742\CLionProjects\p80_17_Strcmp\cmake-build-debug C:\Users\18742\CLionProjects\p80_17_Strcmp\cmake-build-debug C:\Users\18742\CLionProjects\p80_17_Strcmp\cmake-build-debug\CMakeFiles\p80_17_Strcmp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/p80_17_Strcmp.dir/depend
