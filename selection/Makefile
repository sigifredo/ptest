

c:dir
	gcc -o build/selection.c selection.c

cpp:dir
	g++ -o build/selection.cpp selection.cpp

go:dir
	gccgo -g -o build/selection.go selection.go

run:go
	./build/selection.go < numbers.txt

dir:
	mkdir -p build

clean:
	rm -rf build/

