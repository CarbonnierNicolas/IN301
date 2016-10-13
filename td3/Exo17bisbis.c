#include <stdio.h>

void reinitPointeur(int **p)
{
	*p = NULL;	
}

int main(){

int a = 8;
int* p = &a;
reinitPointeur(&p);
printf("a = %d \n", a);
printf("p = %p \n", p);
	
}
