# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Ccode\ClionCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Ccode\ClionCode\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ClionCode.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ClionCode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ClionCode.dir/flags.make

CMakeFiles/ClionCode.dir/main.c.obj: CMakeFiles/ClionCode.dir/flags.make
CMakeFiles/ClionCode.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Ccode\ClionCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ClionCode.dir/main.c.obj"
	D:\CLION2~1.1\mingw64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ClionCode.dir\main.c.obj -c D:\Ccode\ClionCode\main.c

CMakeFiles/ClionCode.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ClionCode.dir/main.c.i"
	D:\CLION2~1.1\mingw64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Ccode\ClionCode\main.c > CMakeFiles\ClionCode.dir\main.c.i

CMakeFiles/ClionCode.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ClionCode.dir/main.c.s"
	D:\CLION2~1.1\mingw64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Ccode\ClionCode\main.c -o CMakeFiles\ClionCode.dir\main.c.s

# Object files for target ClionCode
ClionCode_OBJECTS = \
"CMakeFiles/ClionCode.dir/main.c.obj"

# External object files for target ClionCode
ClionCode_EXTERNAL_OBJECTS =

ClionCode.exe: CMakeFiles/ClionCode.dir/main.c.obj
ClionCode.exe: CMakeFiles/ClionCode.dir/build.make
ClionCode.exe: CMakeFiles/ClionCode.dir/linklibs.rsp
ClionCode.exe: CMakeFiles/ClionCode.dir/objects1.rsp
ClionCode.exe: CMakeFiles/ClionCode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Ccode\ClionCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ClionCode.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ClionCode.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ClionCode.dir/build: ClionCode.exe

.PHONY : CMakeFiles/ClionCode.dir/build

CMakeFiles/ClionCode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ClionCode.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ClionCode.dir/clean

CMakeFiles/ClionCode.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Ccode\ClionCode D:\Ccode\ClionCode D:\Ccode\ClionCode\cmake-build-debug D:\Ccode\ClionCode\cmake-build-debug D:\Ccode\ClionCode\cmake-build-debug\CMakeFiles\ClionCode.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ClionCode.dir/depend

