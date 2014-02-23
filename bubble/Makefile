

c:dir
	gcc -o build/bubble.c bubble.c

go:dir
	gccgo -g -o build/bubble.go bubble.go

run:go
	./build/bubble.go < numbers.txt

dir:
	mkdir -p build

clean:
	rm -rf build/
