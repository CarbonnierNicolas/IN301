#include <stdio.h>
#include "lire_ecrire.h"

void lire_fichier(SUDOKU S){
	
FILE*f=fopen("sudoku.sudo","w");



fclose(f);
}



void ecrire_fichier(SUDOKU S){
	
	int i,j;
	j=0;
	i=0;
	FILE*f=fopen("sudoku.sudo","w");
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			fprintf(f,"%d ",S.la_case[j][i].val);
						  }
		fprintf(f,"\n");
					  }		  
	fclose(f);
}


