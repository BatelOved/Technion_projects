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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\100ba\source\Technion_projects\mtm\ex1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\100ba\source\Technion_projects\mtm\ex1\build

# Include any dependencies generated for this target.
include CMakeFiles/Ex1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ex1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ex1.dir/flags.make

CMakeFiles/Ex1.dir/priority_queue.c.obj: CMakeFiles/Ex1.dir/flags.make
CMakeFiles/Ex1.dir/priority_queue.c.obj: ../priority_queue.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\100ba\source\Technion_projects\mtm\ex1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Ex1.dir/priority_queue.c.obj"
	C:\TDM-GCC-64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Ex1.dir\priority_queue.c.obj -c C:\Users\100ba\source\Technion_projects\mtm\ex1\priority_queue.c

CMakeFiles/Ex1.dir/priority_queue.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Ex1.dir/priority_queue.c.i"
	C:\TDM-GCC-64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\100ba\source\Technion_projects\mtm\ex1\priority_queue.c > CMakeFiles\Ex1.dir\priority_queue.c.i

CMakeFiles/Ex1.dir/priority_queue.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Ex1.dir/priority_queue.c.s"
	C:\TDM-GCC-64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\100ba\source\Technion_projects\mtm\ex1\priority_queue.c -o CMakeFiles\Ex1.dir\priority_queue.c.s

CMakeFiles/Ex1.dir/tests/all_tests.c.obj: CMakeFiles/Ex1.dir/flags.make
CMakeFiles/Ex1.dir/tests/all_tests.c.obj: ../tests/all_tests.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\100ba\source\Technion_projects\mtm\ex1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Ex1.dir/tests/all_tests.c.obj"
	C:\TDM-GCC-64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Ex1.dir\tests\all_tests.c.obj -c C:\Users\100ba\source\Technion_projects\mtm\ex1\tests\all_tests.c

CMakeFiles/Ex1.dir/tests/all_tests.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Ex1.dir/tests/all_tests.c.i"
	C:\TDM-GCC-64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\100ba\source\Technion_projects\mtm\ex1\tests\all_tests.c > CMakeFiles\Ex1.dir\tests\all_tests.c.i

CMakeFiles/Ex1.dir/tests/all_tests.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Ex1.dir/tests/all_tests.c.s"
	C:\TDM-GCC-64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\100ba\source\Technion_projects\mtm\ex1\tests\all_tests.c -o CMakeFiles\Ex1.dir\tests\all_tests.c.s

# Object files for target Ex1
Ex1_OBJECTS = \
"CMakeFiles/Ex1.dir/priority_queue.c.obj" \
"CMakeFiles/Ex1.dir/tests/all_tests.c.obj"

# External object files for target Ex1
Ex1_EXTERNAL_OBJECTS =

Ex1.exe: CMakeFiles/Ex1.dir/priority_queue.c.obj
Ex1.exe: CMakeFiles/Ex1.dir/tests/all_tests.c.obj
Ex1.exe: CMakeFiles/Ex1.dir/build.make
Ex1.exe: CMakeFiles/Ex1.dir/linklibs.rsp
Ex1.exe: CMakeFiles/Ex1.dir/objects1.rsp
Ex1.exe: CMakeFiles/Ex1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\100ba\source\Technion_projects\mtm\ex1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Ex1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Ex1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ex1.dir/build: Ex1.exe

.PHONY : CMakeFiles/Ex1.dir/build

CMakeFiles/Ex1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Ex1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Ex1.dir/clean

CMakeFiles/Ex1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\100ba\source\Technion_projects\mtm\ex1 C:\Users\100ba\source\Technion_projects\mtm\ex1 C:\Users\100ba\source\Technion_projects\mtm\ex1\build C:\Users\100ba\source\Technion_projects\mtm\ex1\build C:\Users\100ba\source\Technion_projects\mtm\ex1\build\CMakeFiles\Ex1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Ex1.dir/depend

