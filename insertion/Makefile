
all:dir
	gcc -o build/insertion.c insertion.c
	g++ -o build/insertion.cpp insertion.cpp
	gccgo -g -o build/insertion.go insertion.go
	javac -d build/ insertion.java
	cp insertion.py build/
	cp insertion.rb build/
	strip build/insertion.c
	strip build/insertion.cpp

dir:
	mkdir -p build

clean:
	rm -rf build/
