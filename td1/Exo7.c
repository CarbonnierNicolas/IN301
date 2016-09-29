#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	float precision = 0.01;
	float s = 0.0;
	int i = 1;
	 
	while(1.0/(i*i)>precision)
	{
		s += 1.0/(i*i);
		i++;
	}
	
	printf(" %f \n", s);

}
