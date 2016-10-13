#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Tableau{
	int taille;
	int tab[100];
};

typedef struct Tableau tableau;

tableau rand_int(){
	tableau T;
	T.taille = 10;
	int i;
	for(i=0;i<10;i++)
	{
		T.tab[i] = alea(20);
	}
	return T;
}
	
	
int alea(int n){
	
	return rand()%n;
}

void main(){

int taille;

taille = sizeof(tableau);
printf("%d \n", taille);


int a,b;
srand(time(NULL));
scanf("a = %d", &a);
b = alea(a);
printf("%d \n", b);
	
}
