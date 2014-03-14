
all:dir
	gcc -o build/gnome.c gnome.c
	g++ -o build/gnome.cpp gnome.cpp
	gccgo -g -o build/gnome.go gnome.go
	javac -d build/ gnome.java
	cp gnome.py build/
	cp gnome.rb build/
	strip build/gnome.c
	strip build/gnome.cpp
	

dir:
	mkdir -p build

clean:
	rm -rf build/
