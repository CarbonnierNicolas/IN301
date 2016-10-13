#include <stdio.h>

int main(){

int taille;

taille = sizeof(int);
printf("int = %d \n", taille);

taille = sizeof(char);
printf("char = %d \n", taille);

taille = sizeof(double);
printf("double = %d \n", taille);

taille = sizeof(char*);
printf("char* = %d \n", taille);

taille = sizeof(void*);
printf("void* = %d \n", taille);

taille = sizeof(int*);
printf("int* = %d \n", taille);

taille = sizeof(double*);
printf("double* = %d \n", taille);

taille = sizeof(int**);
printf("int** = %d \n", taille);

taille = sizeof(int[10]);
printf("int[10] = %d \n", taille);


taille = sizeof(char[7][3]);
printf("char[7][3] = %d \n", taille);

//taille = sizeof(int[]);
printf("int[] = ne fonctionne pas \n");

char Tab[10];

taille = sizeof(Tab);
printf("Tab = %d \n", taille);

taille = sizeof(Tab[0]);
printf("Tab[0] = %d \n", taille);

taille = sizeof(&Tab[0]);
printf("&Tab[0] = %d \n", taille);

taille = sizeof(*&Tab);
printf("*&Tab = %d \n", taille);

taille = sizeof(*&Tab[0]);
printf("*&Tab[0] = %d \n", taille);

taille = sizeof(long int);
printf("long int = %d \n", taille);

taille = sizeof(long long int);
printf("long long int = %d \n", taille);

char(*p)[10] = &Tab;

taille = sizeof(p);
printf("p = %d \n", taille);

taille = sizeof(*p);
printf("*p = %d \n", taille);

taille = sizeof((*p)[2]);
printf("(*p)[2] = %d \n", taille);

taille = sizeof(&(*p)[2]);
printf("&(*p)[2] = %d \n", taille);


return 0;
}
