#include <stdlib.h>
#include <stdio.h>
#include <uvsqgraphics.h>

typedef struct{
	char r,g,b;
} pix;

typedef struct{
	int largeur;
	int longueur;
	int couleur_max;
	pix **img;
} image;

int main(int argc, char *argv[]){
	
	FILE *F = fopen(argv[1], "r");
	
	char dump[256];
	image test;
	fscanf(F,"%s",&dump);
	fscanf(F,"%d %d %d",&test.largeur, &test.longueur, &test.couleur_max);
	test.img = malloc(largeur*sizeof(pix*));
	for(int i = 0; i<largeur; i++){
		
		}
}




