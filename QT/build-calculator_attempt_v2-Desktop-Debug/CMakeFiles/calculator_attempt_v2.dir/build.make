# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ion/Documents/Projects/my-cpp-dump/QT/calculator_attempt_v2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ion/Documents/Projects/my-cpp-dump/QT/build-calculator_attempt_v2-Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/calculator_attempt_v2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/calculator_attempt_v2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/calculator_attempt_v2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/calculator_attempt_v2.dir/flags.make

CMakeFiles/calculator_attempt_v2.dir/calculator_attempt_v2_autogen/mocs_compilation.cpp.o: CMakeFiles/calculator_attempt_v2.dir/flags.make
CMakeFiles/calculator_attempt_v2.dir/calculator_attempt_v2_autogen/mocs_compilation.cpp.o: calculator_attempt_v2_autogen/mocs_compilation.cpp
CMakeFiles/calculator_attempt_v2.dir/calculator_attempt_v2_autogen/mocs_compilation.cpp.o: CMakeFiles/calculator_attempt_v2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/ion/Documents/Projects/my-cpp-dump/QT/build-calculator_attempt_v2-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/calculator_attempt_v2.dir/calculator_attempt_v2_autogen/mocs_compilation.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator_attempt_v2.dir/calculator_attempt_v2_autogen/mocs_compilation.cpp.o -MF CMakeFiles/calculator_attempt_v2.dir/calculator_attempt_v2_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/calculator_attempt_v2.dir/calculator_attempt_v2_autogen/mocs_compilation.cpp.o -c /home/ion/Documents/Projects/my-cpp-dump/QT/build-calculator_attempt_v2-Desktop-Debug/calculator_attempt_v2_autogen/mocs_compilation.cpp

CMakeFiles/calculator_attempt_v2.dir/calculator_attempt_v2_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/calculator_attempt_v2.dir/calculator_attempt_v2_autogen/mocs_compilation.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ion/Documents/Projects/my-cpp-dump/QT/build-calculator_attempt_v2-Desktop-Debug/calculator_attempt_v2_autogen/mocs_compilation.cpp > CMakeFiles/calculator_attempt_v2.dir/calculator_attempt_v2_autogen/mocs_compilation.cpp.i

CMakeFiles/calculator_attempt_v2.dir/calculator_attempt_v2_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/calculator_attempt_v2.dir/calculator_attempt_v2_autogen/mocs_compilation.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ion/Documents/Projects/my-cpp-dump/QT/build-calculator_attempt_v2-Desktop-Debug/calculator_attempt_v2_autogen/mocs_compilation.cpp -o CMakeFiles/calculator_attempt_v2.dir/calculator_attempt_v2_autogen/mocs_compilation.cpp.s

CMakeFiles/calculator_attempt_v2.dir/main.cpp.o: CMakeFiles/calculator_attempt_v2.dir/flags.make
CMakeFiles/calculator_attempt_v2.dir/main.cpp.o: /home/ion/Documents/Projects/my-cpp-dump/QT/calculator_attempt_v2/main.cpp
CMakeFiles/calculator_attempt_v2.dir/main.cpp.o: CMakeFiles/calculator_attempt_v2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/ion/Documents/Projects/my-cpp-dump/QT/build-calculator_attempt_v2-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/calculator_attempt_v2.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator_attempt_v2.dir/main.cpp.o -MF CMakeFiles/calculator_attempt_v2.dir/main.cpp.o.d -o CMakeFiles/calculator_attempt_v2.dir/main.cpp.o -c /home/ion/Documents/Projects/my-cpp-dump/QT/calculator_attempt_v2/main.cpp

CMakeFiles/calculator_attempt_v2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/calculator_attempt_v2.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ion/Documents/Projects/my-cpp-dump/QT/calculator_attempt_v2/main.cpp > CMakeFiles/calculator_attempt_v2.dir/main.cpp.i

CMakeFiles/calculator_attempt_v2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/calculator_attempt_v2.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ion/Documents/Projects/my-cpp-dump/QT/calculator_attempt_v2/main.cpp -o CMakeFiles/calculator_attempt_v2.dir/main.cpp.s

CMakeFiles/calculator_attempt_v2.dir/mainwindow.cpp.o: CMakeFiles/calculator_attempt_v2.dir/flags.make
CMakeFiles/calculator_attempt_v2.dir/mainwindow.cpp.o: /home/ion/Documents/Projects/my-cpp-dump/QT/calculator_attempt_v2/mainwindow.cpp
CMakeFiles/calculator_attempt_v2.dir/mainwindow.cpp.o: CMakeFiles/calculator_attempt_v2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/ion/Documents/Projects/my-cpp-dump/QT/build-calculator_attempt_v2-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/calculator_attempt_v2.dir/mainwindow.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator_attempt_v2.dir/mainwindow.cpp.o -MF CMakeFiles/calculator_attempt_v2.dir/mainwindow.cpp.o.d -o CMakeFiles/calculator_attempt_v2.dir/mainwindow.cpp.o -c /home/ion/Documents/Projects/my-cpp-dump/QT/calculator_attempt_v2/mainwindow.cpp

CMakeFiles/calculator_attempt_v2.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/calculator_attempt_v2.dir/mainwindow.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ion/Documents/Projects/my-cpp-dump/QT/calculator_attempt_v2/mainwindow.cpp > CMakeFiles/calculator_attempt_v2.dir/mainwindow.cpp.i

CMakeFiles/calculator_attempt_v2.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/calculator_attempt_v2.dir/mainwindow.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ion/Documents/Projects/my-cpp-dump/QT/calculator_attempt_v2/mainwindow.cpp -o CMakeFiles/calculator_attempt_v2.dir/mainwindow.cpp.s

# Object files for target calculator_attempt_v2
calculator_attempt_v2_OBJECTS = \
"CMakeFiles/calculator_attempt_v2.dir/calculator_attempt_v2_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/calculator_attempt_v2.dir/main.cpp.o" \
"CMakeFiles/calculator_attempt_v2.dir/mainwindow.cpp.o"

# External object files for target calculator_attempt_v2
calculator_attempt_v2_EXTERNAL_OBJECTS =

calculator_attempt_v2: CMakeFiles/calculator_attempt_v2.dir/calculator_attempt_v2_autogen/mocs_compilation.cpp.o
calculator_attempt_v2: CMakeFiles/calculator_attempt_v2.dir/main.cpp.o
calculator_attempt_v2: CMakeFiles/calculator_attempt_v2.dir/mainwindow.cpp.o
calculator_attempt_v2: CMakeFiles/calculator_attempt_v2.dir/build.make
calculator_attempt_v2: /usr/lib/libQt5Widgets.so.5.15.10
calculator_attempt_v2: /usr/lib/libQt5Gui.so.5.15.10
calculator_attempt_v2: /usr/lib/libQt5Core.so.5.15.10
calculator_attempt_v2: CMakeFiles/calculator_attempt_v2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/ion/Documents/Projects/my-cpp-dump/QT/build-calculator_attempt_v2-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable calculator_attempt_v2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calculator_attempt_v2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/calculator_attempt_v2.dir/build: calculator_attempt_v2
.PHONY : CMakeFiles/calculator_attempt_v2.dir/build

CMakeFiles/calculator_attempt_v2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/calculator_attempt_v2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/calculator_attempt_v2.dir/clean

CMakeFiles/calculator_attempt_v2.dir/depend:
	cd /home/ion/Documents/Projects/my-cpp-dump/QT/build-calculator_attempt_v2-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ion/Documents/Projects/my-cpp-dump/QT/calculator_attempt_v2 /home/ion/Documents/Projects/my-cpp-dump/QT/calculator_attempt_v2 /home/ion/Documents/Projects/my-cpp-dump/QT/build-calculator_attempt_v2-Desktop-Debug /home/ion/Documents/Projects/my-cpp-dump/QT/build-calculator_attempt_v2-Desktop-Debug /home/ion/Documents/Projects/my-cpp-dump/QT/build-calculator_attempt_v2-Desktop-Debug/CMakeFiles/calculator_attempt_v2.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/calculator_attempt_v2.dir/depend
