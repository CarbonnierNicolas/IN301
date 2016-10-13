#include <stdio.h>

void Echange(int *a, int *b)
{
	
int temp;
temp = *a;
*a = *b;
*b = temp;

}

int main(){
int a,b;

scanf("%d", &a);
scanf("%d", &b);

Echange(&a,&b);

printf("a = %d \n", a);
printf("b = %d \n", b);

	
}
