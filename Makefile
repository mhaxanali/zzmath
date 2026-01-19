CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra
TARGET = zzmath.exe
SRC_DIR = zzmath
SRCS = $(SRC_DIR)/main.cpp $(SRC_DIR)/evaluate.cpp $(SRC_DIR)/repl.cpp

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET)
