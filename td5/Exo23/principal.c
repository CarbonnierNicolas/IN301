#include <stdio.h>
#include <stdlib.h>

#include "circonference.h"
#include "surface.h"

int main(){

float c,s;
int rayon = 10;

c = circonference(rayon);
s = surface(rayon);

printf("circonference = %f \n",c);
printf("surface = %f \n",s);

exit(0);
}
