#include <stdio.h>
#include "lire_ecrire.h"

SUDOKU lire_fichier(SUDOKU S){

int x,y;
char c;

FILE*F=fopen("sudoku.sudo","r");

for(x=0; x<N; x++){
	for(y=0; y<N; y++){
		c=fgetc(F);
		while(c=='\n' || c==' ') c=fgetc(F);
			S.la_case[y][x].val=c-48;
			if(S.la_case[y][x].val){
			S.la_case[y][x].modifiable = 0;}
			else{S.la_case[y][x].modifiable = 1;}
		}
	}
	fclose(F);
	return S;
	
	/*	
	 FILE*F=fopen("sudoku.sudo", "r");
	 * if(F=
	 * int x,y;
	 * for(y=N;y>=0;y++){
	 * for(x=0;x<N;x++){
	 * fscanf(F,"%d", &S.la_case[x][y].val);
	 * }
	 * }
	 * fclose(F);
	 * return 1;
	 
		S.la_case[j][i].val = &x;
		S.la_case[j][i].modifiable = 1;
		



fclose(F);*/

}



void ecrire_fichier(SUDOKU S){
	
	int i,j;
	j=0;
	i=0;
	FILE*F=fopen("sudoku.sudo","w");
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			fprintf(F,"%d ",S.la_case[j][i].val);
						  }
		fprintf(F,"\n");
					  }		  
	fclose(F);
}


