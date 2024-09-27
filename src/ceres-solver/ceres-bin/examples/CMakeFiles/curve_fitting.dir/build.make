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
include examples/CMakeFiles/curve_fitting.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/curve_fitting.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/curve_fitting.dir/flags.make

examples/CMakeFiles/curve_fitting.dir/curve_fitting.cc.o: examples/CMakeFiles/curve_fitting.dir/flags.make
examples/CMakeFiles/curve_fitting.dir/curve_fitting.cc.o: ../examples/curve_fitting.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/curve_fitting.dir/curve_fitting.cc.o"
	cd /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/curve_fitting.dir/curve_fitting.cc.o -c /home/zzy/Desktop/carto_ws/src/ceres-solver/examples/curve_fitting.cc

examples/CMakeFiles/curve_fitting.dir/curve_fitting.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/curve_fitting.dir/curve_fitting.cc.i"
	cd /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zzy/Desktop/carto_ws/src/ceres-solver/examples/curve_fitting.cc > CMakeFiles/curve_fitting.dir/curve_fitting.cc.i

examples/CMakeFiles/curve_fitting.dir/curve_fitting.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/curve_fitting.dir/curve_fitting.cc.s"
	cd /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zzy/Desktop/carto_ws/src/ceres-solver/examples/curve_fitting.cc -o CMakeFiles/curve_fitting.dir/curve_fitting.cc.s

# Object files for target curve_fitting
curve_fitting_OBJECTS = \
"CMakeFiles/curve_fitting.dir/curve_fitting.cc.o"

# External object files for target curve_fitting
curve_fitting_EXTERNAL_OBJECTS =

bin/curve_fitting: examples/CMakeFiles/curve_fitting.dir/curve_fitting.cc.o
bin/curve_fitting: examples/CMakeFiles/curve_fitting.dir/build.make
bin/curve_fitting: lib/libceres.a
bin/curve_fitting: /usr/lib/aarch64-linux-gnu/libglog.so
bin/curve_fitting: /usr/lib/aarch64-linux-gnu/libgflags.so.2.2.2
bin/curve_fitting: /usr/lib/aarch64-linux-gnu/libspqr.so
bin/curve_fitting: /usr/lib/aarch64-linux-gnu/libtbb.so
bin/curve_fitting: /usr/lib/aarch64-linux-gnu/libcholmod.so
bin/curve_fitting: /usr/lib/aarch64-linux-gnu/libccolamd.so
bin/curve_fitting: /usr/lib/aarch64-linux-gnu/libcamd.so
bin/curve_fitting: /usr/lib/aarch64-linux-gnu/libcolamd.so
bin/curve_fitting: /usr/lib/aarch64-linux-gnu/libamd.so
bin/curve_fitting: /usr/lib/aarch64-linux-gnu/liblapack.so
bin/curve_fitting: /usr/lib/aarch64-linux-gnu/libf77blas.so
bin/curve_fitting: /usr/lib/aarch64-linux-gnu/libatlas.so
bin/curve_fitting: /usr/lib/aarch64-linux-gnu/libsuitesparseconfig.so
bin/curve_fitting: /usr/lib/aarch64-linux-gnu/librt.so
bin/curve_fitting: /usr/lib/aarch64-linux-gnu/libcxsparse.so
bin/curve_fitting: /usr/lib/aarch64-linux-gnu/liblapack.so
bin/curve_fitting: /usr/lib/aarch64-linux-gnu/libf77blas.so
bin/curve_fitting: /usr/lib/aarch64-linux-gnu/libatlas.so
bin/curve_fitting: /usr/lib/aarch64-linux-gnu/libsuitesparseconfig.so
bin/curve_fitting: /usr/lib/aarch64-linux-gnu/librt.so
bin/curve_fitting: /usr/lib/aarch64-linux-gnu/libcxsparse.so
bin/curve_fitting: examples/CMakeFiles/curve_fitting.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/curve_fitting"
	cd /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/curve_fitting.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/curve_fitting.dir/build: bin/curve_fitting

.PHONY : examples/CMakeFiles/curve_fitting.dir/build

examples/CMakeFiles/curve_fitting.dir/clean:
	cd /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/examples && $(CMAKE_COMMAND) -P CMakeFiles/curve_fitting.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/curve_fitting.dir/clean

examples/CMakeFiles/curve_fitting.dir/depend:
	cd /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zzy/Desktop/carto_ws/src/ceres-solver /home/zzy/Desktop/carto_ws/src/ceres-solver/examples /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/examples /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/examples/CMakeFiles/curve_fitting.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/curve_fitting.dir/depend

