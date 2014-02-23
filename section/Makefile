

c:dir
	gcc -o build/section.c section.c

go:dir
	gccgo -g -o build/section.go section.go

run:c
	./build/section.c < numbers.txt

dir:
	mkdir -p build

clean:
	rm -rf build/

