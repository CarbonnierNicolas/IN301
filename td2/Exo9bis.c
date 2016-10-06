#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// *Correction*

int somme_div(int a)
	{
		int S=0;
		int i=1;
		for(i=1; i<=a/2; i++)
		{
			if(!(a%i))
			{
				S+=i;
			}
		return S;
		}
	}
		
int estami(int a, int b)
	{
		return (somme_div(a)==b && somme_div(b)==a);
	}
// *Fin du code*



int main()
{
	int i,SommeDei;
	int n = 100000;
	for(i=1;i<n;i++)
	{
		SommeDei = somme_div(i);
		
		if(i<=SommeDei && SommeDei<n)
		{
			if(i == somme_div(SommeDei))
				{
					printf("%d et %d sont amis\n", i, SommeDei);
				}
		}
	}
return 0;
}
