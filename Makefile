CXX = clang++
CXXFLAGS = -std=c++17 -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL -Llib -Iinclude -lraylib
OUT_DIR = build

minesweeper:
	$(CXX) $(CXXFLAGS) minesweeper.cpp -o $(OUT_DIR)/minsweeper && ./$(OUT_DIR)/minsweeper

default:
	$(CXX) $(CXXFLAGS) main.cpp -o $(OUT_DIR)/main && ./$(OUT_DIR)/main

clean:
	rm -rf $(OUT_DIR)/*
