# Makefile for compiling and running a specified C file
# Usage: make q1.c
# Or: make q1.c run

CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g
OUTPUT_DIR = bin

# Get the C file from command line
C_FILE := $(filter %.c, $(MAKECMDGOALS))

# Extract program name from C file
PROGRAM := $(OUTPUT_DIR)/$(basename $(C_FILE))

# Compile the specified C file
$(PROGRAM): $(C_FILE)
	@mkdir -p $(OUTPUT_DIR)
	$(CC) $(CFLAGS) -o $@ $<
	@echo "✓ Compiled: $@"

# Allow shorthand: make q1.c
$(C_FILE): $(PROGRAM)
	@true

# Compile and run
run: $(PROGRAM)
	@echo "Running $(PROGRAM)..."
	@./$(PROGRAM)

# Clean build artifacts
clean:
	rm -rf $(OUTPUT_DIR)
	@echo "✓ Cleaned build artifacts"

# Phony targets
.PHONY: run clean help

# Display usage information
help:
	@echo "Usage:"
	@echo "  make q1.c              - Compile q1.c"
	@echo "  make q1.c run          - Compile and run"
	@echo "  make clean             - Remove build artifacts"
	@echo "  make help              - Show this message"