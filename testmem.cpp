#include <stdio.h>
#include <stdlib.h>
int main()
//TESTMEM: programa para determinar memoria libre.
{
void *p;
int i;
long m = 0;
for (i = 1; ; i++)
{
p = malloc(1000000);
if (p == NULL) break;
m+= 1000;
}
printf ("\nTotal de memoria asignada %d\n",m);
return 0;
}
