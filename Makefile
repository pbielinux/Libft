project 			 := libft.a

# Variables for colors
GRN = \033[0;32m
GRNGRN = \033[38;5;46m
RED = \033[0;31m
BLUE = \033[0;34m
RST = \033[0m

# Variables for path s of source, header
inc_dir 			 := ./include
src_dir 			 := ./src
sources 			 := $(wildcard ${src_dir}/*.c)

# Variables for paths of object file and binary targets
build_dir   		 := ./build
obj_dir 			 := ${build_dir}/obj
bin_dir 			 := ${build_dir}/bin
executable 			 := ${bin_dir}/${project}
build_dirs 			 := ${obj_dir} ${bin_dir}
objects 			 := $(subst .c,.o,$(subst ${src_dir},${obj_dir},${sources}))

# C Compiler Configuration
CC      			 := gcc # Using gcc compiler (alternative: clang)
CFLAGS				 := -I${inc_dir} -g -Wall -Werror -Wextra -std=c11 -O0
# CFLAGS options:
# -g 						Compile with debug symbols in binary files
# -Wall -Werror -Wextra 	Warnings: all - display every single warning
# -std=c11  				Use the C2011 feature set
# -I${inc_dir} 				Look in the include directory for include files
# -O0 						Disable compilation optimizations

# Phony rules do not create artifacts but are usefull workflow
.PHONY: all run lint clean re
.PHONY: leak-check variables path-to-bin

# all is the default goal
all: ${executable}

${executable}: ${objects} | ${bin_dir}
	@ar rcs ${project} ${objects}
	@echo "\n[$(GRNGRN) LIB_FT $(RST)]: Compiled!"
	@echo "\n"

# Build object files from sources in a template pattern
${obj_dir}/%.o: ${src_dir}/%.c | ${obj_dir}
	@${CC} ${CFLAGS} -c -o ${@} ${<}
	@echo "$(GRN)/$(RST)\c"

# The build directories should be recreated when prerequisite
${build_dirs}: logo
	@mkdir -p ${@}

# Run static analysis to find issues
lint:
	splint ${SPLINT_FLAGS} -I${inc_dir} ${sources}

# Start a valgrind process
leak-check: ${executable}
	valgrind --leak-check=full ${^}

# clean: Delete all artifacts produced in the build process
clean:
	@rm -rf ${build_dir}
	@echo "[$(GRNGRN) LIB_FT $(RST)]: $(RED)Executable was removed!$(RST)"
	@rm -rf ./${project}
	@echo "[$(GRNGRN) LIB_FT $(RST)]: $(RED)Object files were removed! $(RST)"

re: clean all

logo:
	@echo "$(GRNGRN)"
	@cat ./graphic_assets/logo
	@echo "$(RST)"

# variables: Print variables in this Makefile for Makefile debugging
variables:
	@echo "Sources: ${sources}"
	@echo "Executable: ${executable}"
	@echo "Build Dirs: ${build_dirs}"
	@echo "Objects: ${objects}"
	@echo "C Compiler: ${CC}"
	@echo "C Compiler Flags: ${CFLAGS}"



