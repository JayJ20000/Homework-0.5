# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Output executable
TARGET = program

# Object files
OBJECTS = Circle.o main.o

# Default target
all: $(TARGET)

# Link the object files to create the executable
$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

# Compile Circle.o from Circle.cpp
Circle.o: Circle.cpp Circle.h
	$(CXX) $(CXXFLAGS) -c Circle.cpp

# Compile main.o from main.cpp
main.o: main.cpp Circle.h
	$(CXX) $(CXXFLAGS) -c main.cpp

# Clean up object files and executable
clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all clean
