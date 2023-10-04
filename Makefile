##
# Basic Makefile to build all c files
##

# Variables -------------------------------------------------------------------

# Get Makefile directory (enables using it as reference for relative paths)
MAKEFILE_DIR:=$(dir $(realpath $(firstword $(MAKEFILE_LIST))))
SRC_DIR=$(realpath $(MAKEFILE_DIR)/src)
BIN_DIR = bin

SRC = $(wildcard $(SRC_DIR)/*.c) $(wildcard $(SRC_DIR)/*.cpp)
BINARIES = $(patsubst $(SRC_DIR)/%.c, $(BIN_DIR)/%,$(SRC)) $(patsubst src/%.cpp, $(BIN_DIR)/%,$(SRC))

# Rules -----------------------------------------------------------------------

# Generate all binaries
.phony=all
all: $(BINARIES)

$(BIN_DIR)/class3_question5: $(SRC_DIR)/class3_question5.c bin
	gcc $< -o $@ -lm

$(BIN_DIR)/%: $(SRC_DIR)/%.c bin
	gcc $< -o $@

$(BIN_DIR)/%: $(SRC_DIR)/%.cpp bin
	g++ $< -o $@

$(BIN_DIR):
	mkdir -p $@

.phony=clean
clean:
	rm -rfv bin