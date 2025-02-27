CXX = clang++
CXXFLAGS = -std=c++17 -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL -Llib -Iinclude -lraylib
SRC = src
OUT = build

minesweeper:
	$(CXX) $(CXXFLAGS) $(SRC)/minesweeper.cpp -o ./$(OUT)/minsweeper && $(OUT)/minsweeper && ./$(OUT)/minesweeper

default:
	$(CXX) $(CXXFLAGS) $(SRC)/main.cpp -o $(OUT)/main && $(OUT)/main && ./$(OUT)/main

clean:
	rm $(OUT)/*
