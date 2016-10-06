#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int x,i;
	i=2;
	scanf("%d" , &x);
	
	if(x==1 || x==0)
	{
		printf("Le nombre est premier\n");
	}
	
	while(i*i<x)
	{
		if(x%i==0)
		{
			printf("Le nombre n'est pas premier\n");
			return 0;
		}
		i++;
	}
printf("Le nombre est premier\n ");
}
