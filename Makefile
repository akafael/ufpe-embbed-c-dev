##
# Basic Makefile to build all c files
##

# Variables -------------------------------------------------------------------
SRC_DIR=src
SRC = $(wildcard $(SRC_DIR)/*.c)
BINARIES = $(patsubst src/%.c, bin/%,$(SRC))

# Rules -----------------------------------------------------------------------

# Generate all binaries
.phony=all
all: $(BINARIES)

bin/%: $(SRC_DIR)/%.c bin
	gcc $< -o $@

bin:
	mkdir -p $@

.phony=clean
clean:
	rm -rfv bin