CXX      := g++
CXXFLAGS := -std=c++23 -Wall $(shell pkg-config --cflags glfw3)
LDFLAGS  := $(shell pkg-config --libs glfw3)
TARGET   := test-glfw

$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $< $(LDFLAGS)

clean:
	rm -f $(TARGET)

.PHONY: clean
