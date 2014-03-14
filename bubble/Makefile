
all:dir
	gcc -o build/bubble.c bubble.c
	g++ -o build/bubble.cpp bubble.cpp
	gccgo -g -o build/bubble.go bubble.go
	javac -d build/ bubble.java
	cp bubble.py build/
	cp bubble.rb build/
	strip build/bubble.c
	strip build/bubble.cpp

dir:
	mkdir -p build

clean:
	rm -rf build/
