CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -I /usr/include/opencv4
LINK_LIBS = -lopencv_core -lopencv_highgui -lopencv_imgproc
SRCS := $(wildcard *.cpp)
EXES := $(SRCS:.cpp=)

all: $(EXES)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LINK_LIBS)

clean:
	rm -f $(EXES)

.PHONY: all clean