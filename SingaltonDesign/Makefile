# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall

# Source files
SRC = main.cpp product.cpp

# Object files
OBJ = $(SRC:.cpp=.o)

# Output executable
OUT = main

# Default target (build the executable)
all: $(OUT)

# Link object files to create the executable
$(OUT): $(OBJ)
	$(CXX) $(OBJ) -o $(OUT)

# Rule for compiling .cpp to .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up generated files
clean:
	rm -f $(OBJ) $(OUT)
