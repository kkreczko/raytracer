all: build build-dbg

build:
	@clang++ -I./includes ./src/main.cpp -o ./output/raytracer
	@echo "Build finished"

build-dbg:
	@clang++ -I./includes ./src/main.cpp -g -o ./output/dbg
	@echo "Debug build finished"

clean:
	@rm -rf ./output/*
	@rm -rf ./images/*
	@echo "Clean finished"

run:
	@./output/raytracer > ./images/image.ppm
	@echo "Image generated"
