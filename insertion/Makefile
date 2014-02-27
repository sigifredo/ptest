

c:dir
	gcc -o build/insertion.c insertion.c

cpp:dir
	g++ -o build/insertion.cpp insertion.cpp

go:dir
	gccgo -g -o build/insertion.go insertion.go

run:go
	./build/insertion.go < numbers.txt

dir:
	mkdir -p build

clean:
	rm -rf build/
