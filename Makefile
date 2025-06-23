all: build build-dbg echo

echo:
	@echo "Build finished"

build:
	@clang++ -I./includes ./src/main.cpp -o ./output/raytracer

build-dbg:
	@clang++ -I./includes ./src/main.cpp -g -o ./output/dbg

clean:
	@rm -rf ./output/*
	@echo "Removed binaries"
