##
# Basic Makefile to build all c files
##

# Variables -------------------------------------------------------------------

# Get Makefile directory (enables using it as reference for relative paths)
MAKEFILE_DIR:=$(dir $(realpath $(firstword $(MAKEFILE_LIST))))
SRC_DIR:=$(realpath $(MAKEFILE_DIR)/src)
BIN_DIR:=$(MAKEFILE_DIR)/bin

SRC = $(wildcard $(SRC_DIR)/*.c) $(wildcard $(SRC_DIR)/*.cpp)
BINARIES = $(patsubst $(SRC_DIR)/%.c, $(BIN_DIR)/%, $(SRC))

# Rules -----------------------------------------------------------------------

# Generate all binaries
.phony=all
all: $(BINARIES)

# Remove generated files
.phony=clean
clean:
	rm -rfv bin/*

## Build Rules ---------------------------------------------------------------

# General rule to compile .c files
$(BIN_DIR)/%: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	gcc $< -o $@

# General rule to compile .cpp files
$(BIN_DIR)/%: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	g++ $< -o $@

$(BIN_DIR)/class3_question5: $(SRC_DIR)/class3_question5.c
	@mkdir -p $(dir $@)
	gcc $< -o $@ -lm

$(BIN_DIR)/class2_question5: $(SRC_DIR)/class2_question5.c
	@mkdir -p $(dir $@)
	gcc $< -o $@ -lm
