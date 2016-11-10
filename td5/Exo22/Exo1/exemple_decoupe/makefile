all: ploum
	./ploum
ploum: ploum.o plim.o plam.o
	gcc -Wall -o ploum plim.o plam.o ploum.o
ploum.o: ploum.c plim.h plam.h
	gcc -c -Wall ploum.c
plim.o: plim.c
	gcc -c -Wall plim.c
plam.o: plam.c
	gcc -c -Wall plam.c
clean: 
	rm -f ploum.o
	rm -f plim.o
	rm -f plam.o
	rm -f ploum
