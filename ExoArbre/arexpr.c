#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


struct elemArith{
	float val;
	int type;
	struct elemArith *filsG;
	struct elemArith *filsD;
	
};

typedef struct elemArith* arithExpr;


int parenthese_pos(char *s){//retourne la position de la parenthèse qui ferme la parenthèse en position 0
	int val = 1;
	int i = 0;
	while(val!=0){
		i++;
		if(s[i] == '(') val++;
		if(s[i] == ')') val--;
	}
	return i;
}


arithExpr lire_chaine(char *s){
	
	arithExpr nouveau = malloc(sizeof(struct elemArith));
	if(s[0] == '\0') return NULL;
	if(s[0] != '('){
		nouveau->type = 0;
		scanf(s,"%f", &nouveau->val);
		nouveau->filsG = NULL;
		nouveau->filsD = NULL;
		}	
	else{
		int pos = parenthese_pos(s);
		if(s[pos+1] == '+') nouveau->type = 1;
		else nouveau->type = 2;
		nouveau->filsG = lire_chaine(s+1);
		nouveau->filsD = lire_chaine(s+pos+3);		
		}
		
	 return nouveau;

}


void affiche(arithExpr a){

	if(a != NULL){
		if(a->type == 0) printf("%lf", a->val);
		else{
			printf(" (");
			affiche(a->filsG);
			printf(") ");
			if(a->type == 1) printf(" + ");
			else printf(" * ");
			printf(" (");
			affiche(a->filsD);
			printf(") ");
			}
		}
}

double eval_arith(arithExpr a){
	if(a->type == 0) return a->val;
	if(a->type == 1) return eval_arith(a->filsG) + eval_arith(a->filsD);
	if(a->type == 2) return eval_arith(a->filsG) * eval_arith(a->filsD);
}

arithExpr rand_arith(int n, int m){
	return NULL;
	
}

void free_arith(arithExpr a){
	
}

arithExpr simplifie(arithExpr a){
	return NULL;
}


int main(int argc, char **argv){

	srand(time(NULL));

	if(argc != 2){
		printf("Il doit y a voir comme unique argument le chemin du fichier à ouvrir \n");	
		exit(1);
	}
	
	FILE *f = fopen(argv[1],"r");
	char buffer[300];
	fscanf(f,"%s",buffer);
	printf("Taille du fichier : %d\n",(int)strlen(buffer));
	printf("Contenu du fichier %s\n",buffer);
	
	////////////////// Test des fonctions ///////////////////////

	int i;
	i = parenthese_pos(buffer);
	printf("i = %d",i);
	arithExpr a = lire_chaine(buffer);
	printf("test2");
	affiche(a);
	printf("\nValeur de l'expression : %f\n",eval_arith(a));
	free_arith(a);
	a = rand_arith(5,100);
	affiche(a);
	free_arith(a);
	fclose(f);
	exit(0);

}
