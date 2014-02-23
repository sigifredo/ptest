

c:dir
	gcc -o build/insertion.c insertion.c

go:dir
	gccgo -g -o build/insertion.go insertion.go

run:c
	./build/insertion.c < numbers.txt

dir:
	mkdir -p build

clean:
	rm -rf build/
