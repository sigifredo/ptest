

c:dir
	gcc -o build/cocktail.c cocktail.c

go:dir
	gccgo -g -o build/cocktail.go cocktail.go

run:go
	./build/cocktail.go < numbers.txt

dir:
	mkdir -p build

clean:
	rm -rf build/
