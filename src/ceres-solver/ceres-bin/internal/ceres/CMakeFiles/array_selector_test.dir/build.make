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
include internal/ceres/CMakeFiles/array_selector_test.dir/depend.make

# Include the progress variables for this target.
include internal/ceres/CMakeFiles/array_selector_test.dir/progress.make

# Include the compile flags for this target's objects.
include internal/ceres/CMakeFiles/array_selector_test.dir/flags.make

internal/ceres/CMakeFiles/array_selector_test.dir/array_selector_test.cc.o: internal/ceres/CMakeFiles/array_selector_test.dir/flags.make
internal/ceres/CMakeFiles/array_selector_test.dir/array_selector_test.cc.o: ../internal/ceres/array_selector_test.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object internal/ceres/CMakeFiles/array_selector_test.dir/array_selector_test.cc.o"
	cd /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/internal/ceres && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/array_selector_test.dir/array_selector_test.cc.o -c /home/zzy/Desktop/carto_ws/src/ceres-solver/internal/ceres/array_selector_test.cc

internal/ceres/CMakeFiles/array_selector_test.dir/array_selector_test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/array_selector_test.dir/array_selector_test.cc.i"
	cd /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/internal/ceres && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zzy/Desktop/carto_ws/src/ceres-solver/internal/ceres/array_selector_test.cc > CMakeFiles/array_selector_test.dir/array_selector_test.cc.i

internal/ceres/CMakeFiles/array_selector_test.dir/array_selector_test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/array_selector_test.dir/array_selector_test.cc.s"
	cd /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/internal/ceres && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zzy/Desktop/carto_ws/src/ceres-solver/internal/ceres/array_selector_test.cc -o CMakeFiles/array_selector_test.dir/array_selector_test.cc.s

# Object files for target array_selector_test
array_selector_test_OBJECTS = \
"CMakeFiles/array_selector_test.dir/array_selector_test.cc.o"

# External object files for target array_selector_test
array_selector_test_EXTERNAL_OBJECTS =

bin/array_selector_test: internal/ceres/CMakeFiles/array_selector_test.dir/array_selector_test.cc.o
bin/array_selector_test: internal/ceres/CMakeFiles/array_selector_test.dir/build.make
bin/array_selector_test: lib/libtest_util.a
bin/array_selector_test: lib/libceres.a
bin/array_selector_test: lib/libgtest.a
bin/array_selector_test: /usr/lib/aarch64-linux-gnu/libspqr.so
bin/array_selector_test: /usr/lib/aarch64-linux-gnu/libtbb.so
bin/array_selector_test: /usr/lib/aarch64-linux-gnu/libcholmod.so
bin/array_selector_test: /usr/lib/aarch64-linux-gnu/libccolamd.so
bin/array_selector_test: /usr/lib/aarch64-linux-gnu/libcamd.so
bin/array_selector_test: /usr/lib/aarch64-linux-gnu/libcolamd.so
bin/array_selector_test: /usr/lib/aarch64-linux-gnu/libamd.so
bin/array_selector_test: /usr/lib/aarch64-linux-gnu/liblapack.so
bin/array_selector_test: /usr/lib/aarch64-linux-gnu/libf77blas.so
bin/array_selector_test: /usr/lib/aarch64-linux-gnu/libatlas.so
bin/array_selector_test: /usr/lib/aarch64-linux-gnu/libsuitesparseconfig.so
bin/array_selector_test: /usr/lib/aarch64-linux-gnu/librt.so
bin/array_selector_test: /usr/lib/aarch64-linux-gnu/libcxsparse.so
bin/array_selector_test: /usr/lib/aarch64-linux-gnu/liblapack.so
bin/array_selector_test: /usr/lib/aarch64-linux-gnu/libf77blas.so
bin/array_selector_test: /usr/lib/aarch64-linux-gnu/libatlas.so
bin/array_selector_test: /usr/lib/aarch64-linux-gnu/libsuitesparseconfig.so
bin/array_selector_test: /usr/lib/aarch64-linux-gnu/librt.so
bin/array_selector_test: /usr/lib/aarch64-linux-gnu/libcxsparse.so
bin/array_selector_test: /usr/lib/aarch64-linux-gnu/libgflags.so.2.2.2
bin/array_selector_test: /usr/lib/aarch64-linux-gnu/libglog.so
bin/array_selector_test: internal/ceres/CMakeFiles/array_selector_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/array_selector_test"
	cd /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/internal/ceres && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/array_selector_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
internal/ceres/CMakeFiles/array_selector_test.dir/build: bin/array_selector_test

.PHONY : internal/ceres/CMakeFiles/array_selector_test.dir/build

internal/ceres/CMakeFiles/array_selector_test.dir/clean:
	cd /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/internal/ceres && $(CMAKE_COMMAND) -P CMakeFiles/array_selector_test.dir/cmake_clean.cmake
.PHONY : internal/ceres/CMakeFiles/array_selector_test.dir/clean

internal/ceres/CMakeFiles/array_selector_test.dir/depend:
	cd /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zzy/Desktop/carto_ws/src/ceres-solver /home/zzy/Desktop/carto_ws/src/ceres-solver/internal/ceres /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/internal/ceres /home/zzy/Desktop/carto_ws/src/ceres-solver/ceres-bin/internal/ceres/CMakeFiles/array_selector_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : internal/ceres/CMakeFiles/array_selector_test.dir/depend

