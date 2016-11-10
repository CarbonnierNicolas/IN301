all: main
	./main
main: main.o graphics.o liste.o simul.o
	gcc -Wall -o main main.o graphics.o simul.o liste.o `sdl-config --libs` -lSDL_ttf -lm
main.o: main.c graphics.h liste.h simul.h
	gcc -c -Wall main.c
liste.o: liste.c liste.h graphics.h
	gcc -c -Wall liste.c
simul.o: simul.c simul.h graphics.h
	gcc -c -Wall simul.c
	
#construit le fichier binaire graphics.o
graphics.o: graphics.c graphics.h
	rm -f police.h
	touch police.h
	if test -e /usr/include/SDL_ttf.h;           then echo "#define SDL_TTF_OK" > police.h; fi
	if test -e /usr/include/SDL/SDL_ttf.h;       then echo "#define SDL_TTF_OK" > police.h; fi
	if test -e /usr/local/include/SDL_ttf.h;     then echo "#define SDL_TTF_OK" > police.h; fi
	if test -e /usr/local/include/SDL/SDL_ttf.h; then echo "#define SDL_TTF_OK" > police.h; fi
	gcc -Wall `sdl-config --cflags`  -c graphics.c
clean:
	rm -f main
	rm -f main.o
	rm -f graphics.o
