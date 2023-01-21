main.exe: esame.o BSTRee.o studente.o main.o
	gcc esame.o BSTree.o studente.o main.o -o main.exe

esame.o: esame.c
	gcc -c esame.c

BSTree.o: BSTree.c esame.h
	gcc -c BSTree.c

studente.o: studente.c BSTree.h
	gcc -c studente.c

main.o: BSTree.c studente.h main.c
	gcc -c main.c

clean:
	rm -f esame.o BSTree.o studente.o main.o main.exe
