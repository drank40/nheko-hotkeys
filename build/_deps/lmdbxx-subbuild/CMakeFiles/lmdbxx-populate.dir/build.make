# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild

# Utility rule file for lmdbxx-populate.

# Include any custom commands dependencies for this target.
include CMakeFiles/lmdbxx-populate.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lmdbxx-populate.dir/progress.make

CMakeFiles/lmdbxx-populate: CMakeFiles/lmdbxx-populate-complete

CMakeFiles/lmdbxx-populate-complete: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-install
CMakeFiles/lmdbxx-populate-complete: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-mkdir
CMakeFiles/lmdbxx-populate-complete: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-download
CMakeFiles/lmdbxx-populate-complete: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-update
CMakeFiles/lmdbxx-populate-complete: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-patch
CMakeFiles/lmdbxx-populate-complete: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-configure
CMakeFiles/lmdbxx-populate-complete: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-build
CMakeFiles/lmdbxx-populate-complete: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-install
CMakeFiles/lmdbxx-populate-complete: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-test
CMakeFiles/lmdbxx-populate-complete: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-copyfile
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'lmdbxx-populate'"
	/usr/bin/cmake -E make_directory /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/CMakeFiles
	/usr/bin/cmake -E touch /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/CMakeFiles/lmdbxx-populate-complete
	/usr/bin/cmake -E touch /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-done

lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-build: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No build step for 'lmdbxx-populate'"
	cd /home/renny/doc/c++/nheko/build/_deps/lmdbxx-build && /usr/bin/cmake -E echo_append
	cd /home/renny/doc/c++/nheko/build/_deps/lmdbxx-build && /usr/bin/cmake -E touch /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-build

lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-configure: lmdbxx-populate-prefix/tmp/lmdbxx-populate-cfgcmd.txt
lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-configure: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-patch
lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-configure: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-copyfile
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "No configure step for 'lmdbxx-populate'"
	cd /home/renny/doc/c++/nheko/build/_deps/lmdbxx-build && /usr/bin/cmake -E echo_append
	cd /home/renny/doc/c++/nheko/build/_deps/lmdbxx-build && /usr/bin/cmake -E touch /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-configure

lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-copyfile: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Copying file to SOURCE_DIR"
	/usr/bin/cmake -E copy_if_different /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/lmdbxx-populate-prefix/src/lmdb++.h /home/renny/doc/c++/nheko/build/_deps/lmdbxx-src
	/usr/bin/cmake -E touch /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-copyfile

lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-download: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-urlinfo.txt
lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-download: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Performing download step (download and verify) for 'lmdbxx-populate'"
	cd /home/renny/doc/c++/nheko/build/_deps && /usr/bin/cmake -P /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/download-lmdbxx-populate.cmake
	cd /home/renny/doc/c++/nheko/build/_deps && /usr/bin/cmake -P /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/verify-lmdbxx-populate.cmake
	cd /home/renny/doc/c++/nheko/build/_deps && /usr/bin/cmake -E touch /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-download

lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-install: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "No install step for 'lmdbxx-populate'"
	cd /home/renny/doc/c++/nheko/build/_deps/lmdbxx-build && /usr/bin/cmake -E echo_append
	cd /home/renny/doc/c++/nheko/build/_deps/lmdbxx-build && /usr/bin/cmake -E touch /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-install

lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Creating directories for 'lmdbxx-populate'"
	/usr/bin/cmake -E make_directory /home/renny/doc/c++/nheko/build/_deps/lmdbxx-src
	/usr/bin/cmake -E make_directory /home/renny/doc/c++/nheko/build/_deps/lmdbxx-build
	/usr/bin/cmake -E make_directory /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/lmdbxx-populate-prefix
	/usr/bin/cmake -E make_directory /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/lmdbxx-populate-prefix/tmp
	/usr/bin/cmake -E make_directory /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/lmdbxx-populate-prefix/src/lmdbxx-populate-stamp
	/usr/bin/cmake -E make_directory /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/lmdbxx-populate-prefix/src
	/usr/bin/cmake -E make_directory /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/lmdbxx-populate-prefix/src/lmdbxx-populate-stamp
	/usr/bin/cmake -E touch /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-mkdir

lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-patch: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-update
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No patch step for 'lmdbxx-populate'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-patch

lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-test: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "No test step for 'lmdbxx-populate'"
	cd /home/renny/doc/c++/nheko/build/_deps/lmdbxx-build && /usr/bin/cmake -E echo_append
	cd /home/renny/doc/c++/nheko/build/_deps/lmdbxx-build && /usr/bin/cmake -E touch /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-test

lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-update: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "No update step for 'lmdbxx-populate'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-update

lmdbxx-populate: CMakeFiles/lmdbxx-populate
lmdbxx-populate: CMakeFiles/lmdbxx-populate-complete
lmdbxx-populate: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-build
lmdbxx-populate: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-configure
lmdbxx-populate: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-copyfile
lmdbxx-populate: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-download
lmdbxx-populate: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-install
lmdbxx-populate: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-mkdir
lmdbxx-populate: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-patch
lmdbxx-populate: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-test
lmdbxx-populate: lmdbxx-populate-prefix/src/lmdbxx-populate-stamp/lmdbxx-populate-update
lmdbxx-populate: CMakeFiles/lmdbxx-populate.dir/build.make
.PHONY : lmdbxx-populate

# Rule to build all files generated by this target.
CMakeFiles/lmdbxx-populate.dir/build: lmdbxx-populate
.PHONY : CMakeFiles/lmdbxx-populate.dir/build

CMakeFiles/lmdbxx-populate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lmdbxx-populate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lmdbxx-populate.dir/clean

CMakeFiles/lmdbxx-populate.dir/depend:
	cd /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild /home/renny/doc/c++/nheko/build/_deps/lmdbxx-subbuild/CMakeFiles/lmdbxx-populate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lmdbxx-populate.dir/depend

