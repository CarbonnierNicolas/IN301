#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int racine (int n)
{
	float epsilon = 0.001;
	float g=0;
	float d=n;
	float m;
	
	while(d-g>epsilon)
	{
		m = (d+g)/2;
		if(m*m>n)
		{
			d=m;
		}
		else
		{
			g=m;
		}
	}
	return d;
}


int main()
{
	racine(5);
}
