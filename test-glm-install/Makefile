CXX      := g++
CXXFLAGS := -std=c++23 -Wall
TARGET   := test-glm

$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(TARGET)

.PHONY: clean
