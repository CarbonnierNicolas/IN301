#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Tableau{ //taille 404
	int taille;
	int tab[100];
};

typedef struct Tableau tableau;

int alea(int n){

	return rand()%n;
}

tableau rand_init(){
	tableau T;
	T.taille = 10;
	int i;
	for(i=0;i<10;i++)
	{
		T.tab[i] = alea(20);
	}
	return T;
}
	
	


void affiche(tableau T){
	
	int i = 0;
	for(i=0;i<10;i++){
	
	printf("%d \n", T.tab[i]);
	}
	
}

int produit(tableau T){
	
	int res = 1;
	int i = 0;
	
	for(i=0;i<T.taille;i++){
		
		res *= T.tab[i];
		}
	return res;
}



int main(){

int taille;
srand(time(NULL));

taille = sizeof(tableau);
printf("Taille structure tableau = %d \n", taille);


tableau T;
T = rand_init();
affiche(T);
printf("produit = %d \n", produit(T));
}
	
