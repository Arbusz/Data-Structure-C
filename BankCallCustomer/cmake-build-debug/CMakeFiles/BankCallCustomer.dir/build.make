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
CMAKE_SOURCE_DIR = C:\Users\18742\CLionProjects\BankCallCustomer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\18742\CLionProjects\BankCallCustomer\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BankCallCustomer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BankCallCustomer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BankCallCustomer.dir/flags.make

CMakeFiles/BankCallCustomer.dir/main.cpp.obj: CMakeFiles/BankCallCustomer.dir/flags.make
CMakeFiles/BankCallCustomer.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\18742\CLionProjects\BankCallCustomer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BankCallCustomer.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\BankCallCustomer.dir\main.cpp.obj -c C:\Users\18742\CLionProjects\BankCallCustomer\main.cpp

CMakeFiles/BankCallCustomer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BankCallCustomer.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\18742\CLionProjects\BankCallCustomer\main.cpp > CMakeFiles\BankCallCustomer.dir\main.cpp.i

CMakeFiles/BankCallCustomer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BankCallCustomer.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\18742\CLionProjects\BankCallCustomer\main.cpp -o CMakeFiles\BankCallCustomer.dir\main.cpp.s

CMakeFiles/BankCallCustomer.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/BankCallCustomer.dir/main.cpp.obj.requires

CMakeFiles/BankCallCustomer.dir/main.cpp.obj.provides: CMakeFiles/BankCallCustomer.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\BankCallCustomer.dir\build.make CMakeFiles/BankCallCustomer.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/BankCallCustomer.dir/main.cpp.obj.provides

CMakeFiles/BankCallCustomer.dir/main.cpp.obj.provides.build: CMakeFiles/BankCallCustomer.dir/main.cpp.obj


# Object files for target BankCallCustomer
BankCallCustomer_OBJECTS = \
"CMakeFiles/BankCallCustomer.dir/main.cpp.obj"

# External object files for target BankCallCustomer
BankCallCustomer_EXTERNAL_OBJECTS =

BankCallCustomer.exe: CMakeFiles/BankCallCustomer.dir/main.cpp.obj
BankCallCustomer.exe: CMakeFiles/BankCallCustomer.dir/build.make
BankCallCustomer.exe: CMakeFiles/BankCallCustomer.dir/linklibs.rsp
BankCallCustomer.exe: CMakeFiles/BankCallCustomer.dir/objects1.rsp
BankCallCustomer.exe: CMakeFiles/BankCallCustomer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\18742\CLionProjects\BankCallCustomer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BankCallCustomer.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BankCallCustomer.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BankCallCustomer.dir/build: BankCallCustomer.exe

.PHONY : CMakeFiles/BankCallCustomer.dir/build

CMakeFiles/BankCallCustomer.dir/requires: CMakeFiles/BankCallCustomer.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/BankCallCustomer.dir/requires

CMakeFiles/BankCallCustomer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BankCallCustomer.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BankCallCustomer.dir/clean

CMakeFiles/BankCallCustomer.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\18742\CLionProjects\BankCallCustomer C:\Users\18742\CLionProjects\BankCallCustomer C:\Users\18742\CLionProjects\BankCallCustomer\cmake-build-debug C:\Users\18742\CLionProjects\BankCallCustomer\cmake-build-debug C:\Users\18742\CLionProjects\BankCallCustomer\cmake-build-debug\CMakeFiles\BankCallCustomer.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BankCallCustomer.dir/depend

