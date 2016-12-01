#include <stdio.h>

int main(int argc, char *argv[]){
	
	FILE *F = fopen(argv[1], "r");
	int lettres = 0;
	int lignes = 0;
	int mots = 0;
	char c = fgetc(F);
	
	while(c!=EOF){
		if(c == '\n' || c == ' '){
			lettres++;
			mots++;
			if(c == '\n') lignes++;
			c = fgetc(F);
			while(c == ' ' || c == '\n'){
				lettres++;
				if(c == '\n') lignes++;
				c = fgetc(F);
			}
			lettres++;
			c = fgetc(F);
		}
	}		   
	printf("nombre de caracteres : %d \n", lettres);
	printf("nombre de lignes : %d \n", lignes);
	printf("nombres de mots : %d \n", mots);


}
