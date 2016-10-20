#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct element{
	int val;
	struct element *suivant;
	};

typedef struct element* liste;

liste creerlisteVide(){
	
	return NULL;		
}

int testlisteVide(liste L){
	
	return L == NULL;
	}
	
liste insere_debut(liste l, int x){
	
	liste new = malloc(sizeof(liste));
	new->val = x;
	new->suivant = l;
	return new;
}

liste insere_fin(liste l, int x){
	
	liste a;
	if(l == NULL){
		if(!(a = malloc(sizeof(liste)))){exit(1);}
		else{
		a->val = x;
		a->suivant = NULL;
		return a;
		}
				}
	else{
		a->suivant = insere_fin(a->suivant);
		return a;
		}
	}
	
	
void afficheliste(liste L){
	
	if(testlisteVide(L)){
		printf(" \n");
	}
	else
	{
		printf("%d \n", L->val);
		afficheliste(L->suivant);
	}
	
}



int main(){

liste l;
int a,b;
l = creerlisteVide();
testlisteVide(l);
a = 12;
l = insere_debut(l,a);
afficheliste(l);
b = 10;
l = insere_fin(l,b);
afficheliste(l);

}
