#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int t;
	scanf("%d",&t);
	int h = t/3600;
	int m = t%3600;
	int s = m%60;
	m = m/60;
	
	printf(" %d ", t);
	printf(" correspond à %d heure %d minutes %d secondes ", h, m, s);
	
	return 0;
}
