# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_SOURCE_DIR = /home/ion/Documents/Projects/my-cpp-dump/QT/cezar

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ion/Documents/Projects/my-cpp-dump/QT/build-cezar-Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/cezar.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cezar.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cezar.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cezar.dir/flags.make

CMakeFiles/cezar.dir/cezar_autogen/mocs_compilation.cpp.o: CMakeFiles/cezar.dir/flags.make
CMakeFiles/cezar.dir/cezar_autogen/mocs_compilation.cpp.o: cezar_autogen/mocs_compilation.cpp
CMakeFiles/cezar.dir/cezar_autogen/mocs_compilation.cpp.o: CMakeFiles/cezar.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ion/Documents/Projects/my-cpp-dump/QT/build-cezar-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cezar.dir/cezar_autogen/mocs_compilation.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cezar.dir/cezar_autogen/mocs_compilation.cpp.o -MF CMakeFiles/cezar.dir/cezar_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/cezar.dir/cezar_autogen/mocs_compilation.cpp.o -c /home/ion/Documents/Projects/my-cpp-dump/QT/build-cezar-Desktop-Debug/cezar_autogen/mocs_compilation.cpp

CMakeFiles/cezar.dir/cezar_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cezar.dir/cezar_autogen/mocs_compilation.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ion/Documents/Projects/my-cpp-dump/QT/build-cezar-Desktop-Debug/cezar_autogen/mocs_compilation.cpp > CMakeFiles/cezar.dir/cezar_autogen/mocs_compilation.cpp.i

CMakeFiles/cezar.dir/cezar_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cezar.dir/cezar_autogen/mocs_compilation.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ion/Documents/Projects/my-cpp-dump/QT/build-cezar-Desktop-Debug/cezar_autogen/mocs_compilation.cpp -o CMakeFiles/cezar.dir/cezar_autogen/mocs_compilation.cpp.s

CMakeFiles/cezar.dir/main.cpp.o: CMakeFiles/cezar.dir/flags.make
CMakeFiles/cezar.dir/main.cpp.o: /home/ion/Documents/Projects/my-cpp-dump/QT/cezar/main.cpp
CMakeFiles/cezar.dir/main.cpp.o: CMakeFiles/cezar.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ion/Documents/Projects/my-cpp-dump/QT/build-cezar-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cezar.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cezar.dir/main.cpp.o -MF CMakeFiles/cezar.dir/main.cpp.o.d -o CMakeFiles/cezar.dir/main.cpp.o -c /home/ion/Documents/Projects/my-cpp-dump/QT/cezar/main.cpp

CMakeFiles/cezar.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cezar.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ion/Documents/Projects/my-cpp-dump/QT/cezar/main.cpp > CMakeFiles/cezar.dir/main.cpp.i

CMakeFiles/cezar.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cezar.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ion/Documents/Projects/my-cpp-dump/QT/cezar/main.cpp -o CMakeFiles/cezar.dir/main.cpp.s

CMakeFiles/cezar.dir/mainwindow.cpp.o: CMakeFiles/cezar.dir/flags.make
CMakeFiles/cezar.dir/mainwindow.cpp.o: /home/ion/Documents/Projects/my-cpp-dump/QT/cezar/mainwindow.cpp
CMakeFiles/cezar.dir/mainwindow.cpp.o: CMakeFiles/cezar.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ion/Documents/Projects/my-cpp-dump/QT/build-cezar-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cezar.dir/mainwindow.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cezar.dir/mainwindow.cpp.o -MF CMakeFiles/cezar.dir/mainwindow.cpp.o.d -o CMakeFiles/cezar.dir/mainwindow.cpp.o -c /home/ion/Documents/Projects/my-cpp-dump/QT/cezar/mainwindow.cpp

CMakeFiles/cezar.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cezar.dir/mainwindow.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ion/Documents/Projects/my-cpp-dump/QT/cezar/mainwindow.cpp > CMakeFiles/cezar.dir/mainwindow.cpp.i

CMakeFiles/cezar.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cezar.dir/mainwindow.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ion/Documents/Projects/my-cpp-dump/QT/cezar/mainwindow.cpp -o CMakeFiles/cezar.dir/mainwindow.cpp.s

# Object files for target cezar
cezar_OBJECTS = \
"CMakeFiles/cezar.dir/cezar_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/cezar.dir/main.cpp.o" \
"CMakeFiles/cezar.dir/mainwindow.cpp.o"

# External object files for target cezar
cezar_EXTERNAL_OBJECTS =

cezar: CMakeFiles/cezar.dir/cezar_autogen/mocs_compilation.cpp.o
cezar: CMakeFiles/cezar.dir/main.cpp.o
cezar: CMakeFiles/cezar.dir/mainwindow.cpp.o
cezar: CMakeFiles/cezar.dir/build.make
cezar: /usr/lib/libQt5Widgets.so.5.15.10
cezar: /usr/lib/libQt5Gui.so.5.15.10
cezar: /usr/lib/libQt5Core.so.5.15.10
cezar: CMakeFiles/cezar.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ion/Documents/Projects/my-cpp-dump/QT/build-cezar-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable cezar"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cezar.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cezar.dir/build: cezar
.PHONY : CMakeFiles/cezar.dir/build

CMakeFiles/cezar.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cezar.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cezar.dir/clean

CMakeFiles/cezar.dir/depend:
	cd /home/ion/Documents/Projects/my-cpp-dump/QT/build-cezar-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ion/Documents/Projects/my-cpp-dump/QT/cezar /home/ion/Documents/Projects/my-cpp-dump/QT/cezar /home/ion/Documents/Projects/my-cpp-dump/QT/build-cezar-Desktop-Debug /home/ion/Documents/Projects/my-cpp-dump/QT/build-cezar-Desktop-Debug /home/ion/Documents/Projects/my-cpp-dump/QT/build-cezar-Desktop-Debug/CMakeFiles/cezar.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cezar.dir/depend

