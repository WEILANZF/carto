# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zzy/Desktop/carto_ws/src/ceres-solver

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin

# Include any dependencies generated for this target.
include examples/CMakeFiles/helloworld.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/helloworld.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/helloworld.dir/flags.make

examples/CMakeFiles/helloworld.dir/helloworld.cc.o: examples/CMakeFiles/helloworld.dir/flags.make
examples/CMakeFiles/helloworld.dir/helloworld.cc.o: ../examples/helloworld.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/helloworld.dir/helloworld.cc.o"
	cd /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/helloworld.dir/helloworld.cc.o -c /home/zzy/Desktop/carto_ws/src/ceres-solver/examples/helloworld.cc

examples/CMakeFiles/helloworld.dir/helloworld.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/helloworld.dir/helloworld.cc.i"
	cd /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zzy/Desktop/carto_ws/src/ceres-solver/examples/helloworld.cc > CMakeFiles/helloworld.dir/helloworld.cc.i

examples/CMakeFiles/helloworld.dir/helloworld.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/helloworld.dir/helloworld.cc.s"
	cd /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zzy/Desktop/carto_ws/src/ceres-solver/examples/helloworld.cc -o CMakeFiles/helloworld.dir/helloworld.cc.s

# Object files for target helloworld
helloworld_OBJECTS = \
"CMakeFiles/helloworld.dir/helloworld.cc.o"

# External object files for target helloworld
helloworld_EXTERNAL_OBJECTS =

bin/helloworld: examples/CMakeFiles/helloworld.dir/helloworld.cc.o
bin/helloworld: examples/CMakeFiles/helloworld.dir/build.make
bin/helloworld: lib/libceres.a
bin/helloworld: /usr/lib/aarch64-linux-gnu/libglog.so
bin/helloworld: /usr/lib/aarch64-linux-gnu/libgflags.so.2.2.2
bin/helloworld: /usr/lib/aarch64-linux-gnu/libspqr.so
bin/helloworld: /usr/lib/aarch64-linux-gnu/libtbb.so
bin/helloworld: /usr/lib/aarch64-linux-gnu/libcholmod.so
bin/helloworld: /usr/lib/aarch64-linux-gnu/libccolamd.so
bin/helloworld: /usr/lib/aarch64-linux-gnu/libcamd.so
bin/helloworld: /usr/lib/aarch64-linux-gnu/libcolamd.so
bin/helloworld: /usr/lib/aarch64-linux-gnu/libamd.so
bin/helloworld: /usr/lib/aarch64-linux-gnu/liblapack.so
bin/helloworld: /usr/lib/aarch64-linux-gnu/libf77blas.so
bin/helloworld: /usr/lib/aarch64-linux-gnu/libatlas.so
bin/helloworld: /usr/lib/aarch64-linux-gnu/libsuitesparseconfig.so
bin/helloworld: /usr/lib/aarch64-linux-gnu/librt.so
bin/helloworld: /usr/lib/aarch64-linux-gnu/libcxsparse.so
bin/helloworld: /usr/lib/aarch64-linux-gnu/liblapack.so
bin/helloworld: /usr/lib/aarch64-linux-gnu/libf77blas.so
bin/helloworld: /usr/lib/aarch64-linux-gnu/libatlas.so
bin/helloworld: /usr/lib/aarch64-linux-gnu/libsuitesparseconfig.so
bin/helloworld: /usr/lib/aarch64-linux-gnu/librt.so
bin/helloworld: /usr/lib/aarch64-linux-gnu/libcxsparse.so
bin/helloworld: examples/CMakeFiles/helloworld.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/helloworld"
	cd /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/helloworld.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/helloworld.dir/build: bin/helloworld

.PHONY : examples/CMakeFiles/helloworld.dir/build

examples/CMakeFiles/helloworld.dir/clean:
	cd /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/examples && $(CMAKE_COMMAND) -P CMakeFiles/helloworld.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/helloworld.dir/clean

examples/CMakeFiles/helloworld.dir/depend:
	cd /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zzy/Desktop/carto_ws/src/ceres-solver /home/zzy/Desktop/carto_ws/src/ceres-solver/examples /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/examples /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/examples/CMakeFiles/helloworld.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/helloworld.dir/depend

