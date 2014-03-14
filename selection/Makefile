
all:dir
	gcc -o build/selection.c selection.c
	g++ -o build/selection.cpp selection.cpp
	gccgo -g -o build/selection.go selection.go
	javac -d build/ selection.java
	cp selection.py build/
	cp selection.rb build/
	strip build/selection.c
	strip build/selection.cpp

dir:
	mkdir -p build

clean:
	rm -rf build/

