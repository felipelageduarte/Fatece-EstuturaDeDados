all: clean tad main compile run

main:
	gcc -c main.c -o main.o
	
tad:
	gcc -c tad.c -o tad.o

compile:
	gcc -o gabriel tad.o main.o

run:
	./gabriel

clean:
	rm -rf *.o
	rm -rf *~
	rm -rf gabriel
