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
CMAKE_SOURCE_DIR = /home/ion/Documents/Projects/my-cpp-dump/QT/hello_user_gui

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ion/Documents/Projects/my-cpp-dump/QT/build-hello_user_gui-Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/hello_user_gui.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/hello_user_gui.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/hello_user_gui.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hello_user_gui.dir/flags.make

CMakeFiles/hello_user_gui.dir/hello_user_gui_autogen/mocs_compilation.cpp.o: CMakeFiles/hello_user_gui.dir/flags.make
CMakeFiles/hello_user_gui.dir/hello_user_gui_autogen/mocs_compilation.cpp.o: hello_user_gui_autogen/mocs_compilation.cpp
CMakeFiles/hello_user_gui.dir/hello_user_gui_autogen/mocs_compilation.cpp.o: CMakeFiles/hello_user_gui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ion/Documents/Projects/my-cpp-dump/QT/build-hello_user_gui-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hello_user_gui.dir/hello_user_gui_autogen/mocs_compilation.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hello_user_gui.dir/hello_user_gui_autogen/mocs_compilation.cpp.o -MF CMakeFiles/hello_user_gui.dir/hello_user_gui_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/hello_user_gui.dir/hello_user_gui_autogen/mocs_compilation.cpp.o -c /home/ion/Documents/Projects/my-cpp-dump/QT/build-hello_user_gui-Desktop-Debug/hello_user_gui_autogen/mocs_compilation.cpp

CMakeFiles/hello_user_gui.dir/hello_user_gui_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello_user_gui.dir/hello_user_gui_autogen/mocs_compilation.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ion/Documents/Projects/my-cpp-dump/QT/build-hello_user_gui-Desktop-Debug/hello_user_gui_autogen/mocs_compilation.cpp > CMakeFiles/hello_user_gui.dir/hello_user_gui_autogen/mocs_compilation.cpp.i

CMakeFiles/hello_user_gui.dir/hello_user_gui_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello_user_gui.dir/hello_user_gui_autogen/mocs_compilation.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ion/Documents/Projects/my-cpp-dump/QT/build-hello_user_gui-Desktop-Debug/hello_user_gui_autogen/mocs_compilation.cpp -o CMakeFiles/hello_user_gui.dir/hello_user_gui_autogen/mocs_compilation.cpp.s

CMakeFiles/hello_user_gui.dir/main.cpp.o: CMakeFiles/hello_user_gui.dir/flags.make
CMakeFiles/hello_user_gui.dir/main.cpp.o: /home/ion/Documents/Projects/my-cpp-dump/QT/hello_user_gui/main.cpp
CMakeFiles/hello_user_gui.dir/main.cpp.o: CMakeFiles/hello_user_gui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ion/Documents/Projects/my-cpp-dump/QT/build-hello_user_gui-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hello_user_gui.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hello_user_gui.dir/main.cpp.o -MF CMakeFiles/hello_user_gui.dir/main.cpp.o.d -o CMakeFiles/hello_user_gui.dir/main.cpp.o -c /home/ion/Documents/Projects/my-cpp-dump/QT/hello_user_gui/main.cpp

CMakeFiles/hello_user_gui.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello_user_gui.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ion/Documents/Projects/my-cpp-dump/QT/hello_user_gui/main.cpp > CMakeFiles/hello_user_gui.dir/main.cpp.i

CMakeFiles/hello_user_gui.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello_user_gui.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ion/Documents/Projects/my-cpp-dump/QT/hello_user_gui/main.cpp -o CMakeFiles/hello_user_gui.dir/main.cpp.s

CMakeFiles/hello_user_gui.dir/mainwindow.cpp.o: CMakeFiles/hello_user_gui.dir/flags.make
CMakeFiles/hello_user_gui.dir/mainwindow.cpp.o: /home/ion/Documents/Projects/my-cpp-dump/QT/hello_user_gui/mainwindow.cpp
CMakeFiles/hello_user_gui.dir/mainwindow.cpp.o: CMakeFiles/hello_user_gui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ion/Documents/Projects/my-cpp-dump/QT/build-hello_user_gui-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/hello_user_gui.dir/mainwindow.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hello_user_gui.dir/mainwindow.cpp.o -MF CMakeFiles/hello_user_gui.dir/mainwindow.cpp.o.d -o CMakeFiles/hello_user_gui.dir/mainwindow.cpp.o -c /home/ion/Documents/Projects/my-cpp-dump/QT/hello_user_gui/mainwindow.cpp

CMakeFiles/hello_user_gui.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello_user_gui.dir/mainwindow.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ion/Documents/Projects/my-cpp-dump/QT/hello_user_gui/mainwindow.cpp > CMakeFiles/hello_user_gui.dir/mainwindow.cpp.i

CMakeFiles/hello_user_gui.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello_user_gui.dir/mainwindow.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ion/Documents/Projects/my-cpp-dump/QT/hello_user_gui/mainwindow.cpp -o CMakeFiles/hello_user_gui.dir/mainwindow.cpp.s

# Object files for target hello_user_gui
hello_user_gui_OBJECTS = \
"CMakeFiles/hello_user_gui.dir/hello_user_gui_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/hello_user_gui.dir/main.cpp.o" \
"CMakeFiles/hello_user_gui.dir/mainwindow.cpp.o"

# External object files for target hello_user_gui
hello_user_gui_EXTERNAL_OBJECTS =

hello_user_gui: CMakeFiles/hello_user_gui.dir/hello_user_gui_autogen/mocs_compilation.cpp.o
hello_user_gui: CMakeFiles/hello_user_gui.dir/main.cpp.o
hello_user_gui: CMakeFiles/hello_user_gui.dir/mainwindow.cpp.o
hello_user_gui: CMakeFiles/hello_user_gui.dir/build.make
hello_user_gui: /usr/lib/libQt5Widgets.so.5.15.10
hello_user_gui: /usr/lib/libQt5Gui.so.5.15.10
hello_user_gui: /usr/lib/libQt5Core.so.5.15.10
hello_user_gui: CMakeFiles/hello_user_gui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ion/Documents/Projects/my-cpp-dump/QT/build-hello_user_gui-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable hello_user_gui"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hello_user_gui.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hello_user_gui.dir/build: hello_user_gui
.PHONY : CMakeFiles/hello_user_gui.dir/build

CMakeFiles/hello_user_gui.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hello_user_gui.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hello_user_gui.dir/clean

CMakeFiles/hello_user_gui.dir/depend:
	cd /home/ion/Documents/Projects/my-cpp-dump/QT/build-hello_user_gui-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ion/Documents/Projects/my-cpp-dump/QT/hello_user_gui /home/ion/Documents/Projects/my-cpp-dump/QT/hello_user_gui /home/ion/Documents/Projects/my-cpp-dump/QT/build-hello_user_gui-Desktop-Debug /home/ion/Documents/Projects/my-cpp-dump/QT/build-hello_user_gui-Desktop-Debug /home/ion/Documents/Projects/my-cpp-dump/QT/build-hello_user_gui-Desktop-Debug/CMakeFiles/hello_user_gui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hello_user_gui.dir/depend

