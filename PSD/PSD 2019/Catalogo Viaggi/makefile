main.exe: item.o catalogo.o main.o
	gcc item.o catalogo.o main.o -o main.exe

item.o: item.c
	gcc -c item.c

catalogo.o: catalogo.c item.h
	gcc -c catalogo.c

main.o: catalogo.h main.c
	gcc -c main.c

clean:
	rm -f item.o catalogo.o main.o main.exe
