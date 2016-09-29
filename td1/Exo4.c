#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int i,j;
	i=0;
	j=0;
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i;j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	return 0;
}
