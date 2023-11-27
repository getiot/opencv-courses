# Makefile for OpenCV C++ program

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall

# OpenCV libraries
OPENCV_LIBS = `pkg-config --libs opencv4`

INCLUDES=-I/usr/include/opencv4

# Source files
SRCS = Open_Camera.cpp

# Executable name
TARGET = Open_Camera

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(SRCS) -o $(TARGET) $(OPENCV_LIBS)

clean:
	rm -f $(TARGET)

