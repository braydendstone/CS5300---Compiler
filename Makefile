# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /home/braydendstone/Documents/CS5300/official

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/braydendstone/Documents/CS5300/official

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/braydendstone/Documents/CS5300/official/CMakeFiles /home/braydendstone/Documents/CS5300/official/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/braydendstone/Documents/CS5300/official/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named cpsl

# Build rule for target.
cpsl: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 cpsl
.PHONY : cpsl

# fast build rule for target.
cpsl/fast:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/build
.PHONY : cpsl/fast

Expression.o: Expression.cpp.o

.PHONY : Expression.o

# target to build an object file
Expression.cpp.o:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/Expression.cpp.o
.PHONY : Expression.cpp.o

Expression.i: Expression.cpp.i

.PHONY : Expression.i

# target to preprocess a source file
Expression.cpp.i:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/Expression.cpp.i
.PHONY : Expression.cpp.i

Expression.s: Expression.cpp.s

.PHONY : Expression.s

# target to generate assembly for a file
Expression.cpp.s:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/Expression.cpp.s
.PHONY : Expression.cpp.s

Function.o: Function.cpp.o

.PHONY : Function.o

# target to build an object file
Function.cpp.o:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/Function.cpp.o
.PHONY : Function.cpp.o

Function.i: Function.cpp.i

.PHONY : Function.i

# target to preprocess a source file
Function.cpp.i:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/Function.cpp.i
.PHONY : Function.cpp.i

Function.s: Function.cpp.s

.PHONY : Function.s

# target to generate assembly for a file
Function.cpp.s:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/Function.cpp.s
.PHONY : Function.cpp.s

GlobalSymbolTable.o: GlobalSymbolTable.cpp.o

.PHONY : GlobalSymbolTable.o

# target to build an object file
GlobalSymbolTable.cpp.o:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/GlobalSymbolTable.cpp.o
.PHONY : GlobalSymbolTable.cpp.o

GlobalSymbolTable.i: GlobalSymbolTable.cpp.i

.PHONY : GlobalSymbolTable.i

# target to preprocess a source file
GlobalSymbolTable.cpp.i:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/GlobalSymbolTable.cpp.i
.PHONY : GlobalSymbolTable.cpp.i

GlobalSymbolTable.s: GlobalSymbolTable.cpp.s

.PHONY : GlobalSymbolTable.s

# target to generate assembly for a file
GlobalSymbolTable.cpp.s:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/GlobalSymbolTable.cpp.s
.PHONY : GlobalSymbolTable.cpp.s

LValue.o: LValue.cpp.o

.PHONY : LValue.o

# target to build an object file
LValue.cpp.o:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/LValue.cpp.o
.PHONY : LValue.cpp.o

LValue.i: LValue.cpp.i

.PHONY : LValue.i

# target to preprocess a source file
LValue.cpp.i:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/LValue.cpp.i
.PHONY : LValue.cpp.i

LValue.s: LValue.cpp.s

.PHONY : LValue.s

# target to generate assembly for a file
LValue.cpp.s:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/LValue.cpp.s
.PHONY : LValue.cpp.s

MainSpace.o: MainSpace.cpp.o

.PHONY : MainSpace.o

# target to build an object file
MainSpace.cpp.o:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/MainSpace.cpp.o
.PHONY : MainSpace.cpp.o

MainSpace.i: MainSpace.cpp.i

.PHONY : MainSpace.i

# target to preprocess a source file
MainSpace.cpp.i:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/MainSpace.cpp.i
.PHONY : MainSpace.cpp.i

MainSpace.s: MainSpace.cpp.s

.PHONY : MainSpace.s

# target to generate assembly for a file
MainSpace.cpp.s:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/MainSpace.cpp.s
.PHONY : MainSpace.cpp.s

RegPool.o: RegPool.cpp.o

.PHONY : RegPool.o

# target to build an object file
RegPool.cpp.o:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/RegPool.cpp.o
.PHONY : RegPool.cpp.o

RegPool.i: RegPool.cpp.i

.PHONY : RegPool.i

# target to preprocess a source file
RegPool.cpp.i:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/RegPool.cpp.i
.PHONY : RegPool.cpp.i

RegPool.s: RegPool.cpp.s

.PHONY : RegPool.s

# target to generate assembly for a file
RegPool.cpp.s:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/RegPool.cpp.s
.PHONY : RegPool.cpp.s

SymbolTable.o: SymbolTable.cpp.o

.PHONY : SymbolTable.o

# target to build an object file
SymbolTable.cpp.o:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/SymbolTable.cpp.o
.PHONY : SymbolTable.cpp.o

SymbolTable.i: SymbolTable.cpp.i

.PHONY : SymbolTable.i

# target to preprocess a source file
SymbolTable.cpp.i:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/SymbolTable.cpp.i
.PHONY : SymbolTable.cpp.i

SymbolTable.s: SymbolTable.cpp.s

.PHONY : SymbolTable.s

# target to generate assembly for a file
SymbolTable.cpp.s:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/SymbolTable.cpp.s
.PHONY : SymbolTable.cpp.s

Types.o: Types.cpp.o

.PHONY : Types.o

# target to build an object file
Types.cpp.o:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/Types.cpp.o
.PHONY : Types.cpp.o

Types.i: Types.cpp.i

.PHONY : Types.i

# target to preprocess a source file
Types.cpp.i:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/Types.cpp.i
.PHONY : Types.cpp.i

Types.s: Types.cpp.s

.PHONY : Types.s

# target to generate assembly for a file
Types.cpp.s:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/Types.cpp.s
.PHONY : Types.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/main.cpp.s
.PHONY : main.cpp.s

parser.o: parser.cpp.o

.PHONY : parser.o

# target to build an object file
parser.cpp.o:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/parser.cpp.o
.PHONY : parser.cpp.o

parser.i: parser.cpp.i

.PHONY : parser.i

# target to preprocess a source file
parser.cpp.i:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/parser.cpp.i
.PHONY : parser.cpp.i

parser.s: parser.cpp.s

.PHONY : parser.s

# target to generate assembly for a file
parser.cpp.s:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/parser.cpp.s
.PHONY : parser.cpp.s

scanner.o: scanner.cpp.o

.PHONY : scanner.o

# target to build an object file
scanner.cpp.o:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/scanner.cpp.o
.PHONY : scanner.cpp.o

scanner.i: scanner.cpp.i

.PHONY : scanner.i

# target to preprocess a source file
scanner.cpp.i:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/scanner.cpp.i
.PHONY : scanner.cpp.i

scanner.s: scanner.cpp.s

.PHONY : scanner.s

# target to generate assembly for a file
scanner.cpp.s:
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/scanner.cpp.s
.PHONY : scanner.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... cpsl"
	@echo "... edit_cache"
	@echo "... Expression.o"
	@echo "... Expression.i"
	@echo "... Expression.s"
	@echo "... Function.o"
	@echo "... Function.i"
	@echo "... Function.s"
	@echo "... GlobalSymbolTable.o"
	@echo "... GlobalSymbolTable.i"
	@echo "... GlobalSymbolTable.s"
	@echo "... LValue.o"
	@echo "... LValue.i"
	@echo "... LValue.s"
	@echo "... MainSpace.o"
	@echo "... MainSpace.i"
	@echo "... MainSpace.s"
	@echo "... RegPool.o"
	@echo "... RegPool.i"
	@echo "... RegPool.s"
	@echo "... SymbolTable.o"
	@echo "... SymbolTable.i"
	@echo "... SymbolTable.s"
	@echo "... Types.o"
	@echo "... Types.i"
	@echo "... Types.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... parser.o"
	@echo "... parser.i"
	@echo "... parser.s"
	@echo "... scanner.o"
	@echo "... scanner.i"
	@echo "... scanner.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

