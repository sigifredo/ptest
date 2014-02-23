

c:dir
	gcc -o build/gnome.c gnome.c

go:dir
	gccgo -g -o build/gnome.go gnome.go

run:go
	./build/gnome.go < numbers.txt

dir:
	mkdir -p build

clean:
	rm -rf build/
