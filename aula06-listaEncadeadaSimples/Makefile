all: clean compile

compile: listaencadeadasimples object main
	gcc object.o listaencadeadasimples.o main.o -o main

main:
	gcc -c main.c -o main.o

listaencadeadasimples:
	gcc -c listaencadeadasimples.c -o listaencadeadasimples.o

object:
	gcc -c object.c -o object.o

run:
	./main

clean:
	rm -rfv main
	rm -rfv *.o
