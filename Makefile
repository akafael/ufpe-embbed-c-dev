##
# Basic Makefile to build all c files
##

# Variables -------------------------------------------------------------------
SRC_DIR=src
SRC = $(wildcard $(SRC_DIR)/*.c) $(wildcard $(SRC_DIR)/*.cpp)
BINARIES = $(patsubst src/%.c, bin/%,$(SRC)) $(patsubst src/%.cpp, bin/%,$(SRC))

# Rules -----------------------------------------------------------------------

# Generate all binaries
.phony=all
all: $(BINARIES)

bin/%: $(SRC_DIR)/%.c bin
	gcc $< -o $@

bin/%: $(SRC_DIR)/%.cpp bin
	g++ $< -o $@

bin:
	mkdir -p $@

.phony=clean
clean:
	rm -rfv bin