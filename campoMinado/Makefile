all: main compile run

compile: matrix jogo main
	gcc matrix.o jogo.o main.o -o campoMinado

main:
	gcc -c main.c -o main.o

jogo:
	gcc -c jogo.c -o jogo.o

matrix:
	gcc -c matrix.c -o matrix.o	

clean:
	rm -rf *.o

run:
	./campoMinado
