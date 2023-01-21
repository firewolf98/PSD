main.exe: esame.o libretto.o main.o
	gcc esame.o libretto.o main.o -o main.exe

esame.o: esame.c
	gcc -c esame.c

libretto.o: libretto.c esame.h
	gcc -c libretto.c

main.o: libretto.h main.c
	gcc -c main.c

clean:
	rm -f esame.o libretto.o main.o main.exe
