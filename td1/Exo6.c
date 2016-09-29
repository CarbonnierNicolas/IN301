#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int x,y,res;
	res = 0;
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	if(x%2 == 0)
	{
		res = (x/2)*(2*y);
	}
	else
	{
		res = (x-1)*y+y;
	}
printf("Le resultat de %d x %d est %d ", x, y, res);

return 0;
}
