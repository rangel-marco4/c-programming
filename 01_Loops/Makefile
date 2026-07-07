# Define compiler and flags
CC = gcc
CFLAGS = -Wall -g

# Target executable name
TARGET = loops

# Default target
all: $(TARGET)

# Compile the executable
$(TARGET): loops.c
	$(CC) $(CFLAGS) -o $(TARGET) loops.c

# Clean up build files
clean:
	rm -f $(TARGET)
