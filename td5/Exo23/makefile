all: principal
	./principal	
principal: principal.o circonference.o surface.o
	gcc -Wall -o principal principal.o circonference.o surface.o
principal.o: principal.c surface.h circonference.h
	gcc -Wall -c principal.c
circonference.o: circonference.c pi.h
	gcc -Wall -c circonference.c	
surface.o: surface.c pi.h
	gcc -Wall -c surface.c
clean:
	rm -f surface.o
	rm -f circonference.o
	rm -f principal.o
	rm -f principal
