
all:dir
	gcc -o build/cocktail.c cocktail.c
	g++ -o build/cocktail.cpp cocktail.cpp
	gccgo -g -o build/cocktail.go cocktail.go
	javac -d build/ cocktail.java
	cp cocktail.py build/
	cp cocktail.rb build/
	strip build/cocktail.c
	strip build/cocktail.cpp

dir:
	mkdir -p build

clean:
	rm -rf build/
