all: build build-dbg

build:
	@clang++ -I./includes ./src/main.cpp -o ./output/raytracer
	@echo "Build finished"

build-dbg:
	@clang++ -I./includes ./src/main.cpp -g -o ./output/dbg
	@echo "Debug build finished"

clean:
	@rm -rf ./output/*
	@echo "Clean finished"
