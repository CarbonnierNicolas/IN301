#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// *Correction*

//int somme_div(int a)
//	{
//		int S=0;
//		int i=1;
//		for(i<=a/2; i++;)
//		{
//			if(!(a%i))
//			{
//				S+=i;
//			}
//		return S;
//		}
//	}
		
//int estami(int a, int b)
//	{
//		return (somme_div(a)==b && somme_div(b)==a);
//	}
// *Fin du code*



int main()
{
	int n,m,i,Sn,Sm;
	i=1;
	Sn=0;
	Sm=0;
	
	scanf("%d" , &n);
	scanf("%d" , &m);
	
	for(i=1;i<=n/2;i++)
	{
		if((n%i)==0)
		{
			Sn=Sn+i;
		}
	}
	
	for(i=1;i<=m/2;i++)
	{
		if((m%i)==0)
		{
			Sm=Sm+i;
		}
	}
	
	if(Sn==m && Sm==n)
	{
		printf("%d et %d sont amis\n" , n, m);
	}
	else
	{
		printf("%d et %d ne sont pas amis\n" , n, m);
	}

// *Correction de la 2eme question*
//int i,SommeDei;
//int n = 100000;
//for(i=1;i<n;i++)
//{
//	SommeDei = somme_div(i);
//	if(i<=SommeDei && SommeDei<n)
//	{
//	if(i == somme_div(SommeDei)
//		{
//			printf("%d et %d sont amis", i, SommeDei);
//		}
//	}
//}
//return 0;
//
// *Fin du code*
}
