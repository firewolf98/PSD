ordina.exe: intlib.o ordinamento.o ordina.o
	gcc intlib.o ordinamento.o ordina.o -o ordina.exe

intlib.o: intlib.c
	gcc -c intlib.c

ordinamento.o: ordinamento.c intlib.h
	gcc -c ordinamento.c

ordina.o: ordinamento.h ordina.c
	gcc -c ordina.c

clean:
	rm -f intlib.o ordinamento.o ordina.o ordina.exe
