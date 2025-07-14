CXX = g++
CXXFLAGS = -IEngine -IGame -std=c++17
SRC = main.cpp
OUT = NeuroSilent

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

run: all
	./$(OUT)

clean:
	rm -f $(OUT)
