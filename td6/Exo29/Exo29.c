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


