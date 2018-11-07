#include <stdio.h>
#define L 100
void leerArray(double a[], int* num);
void imprimirArray (const double a[], int n);
int main()
{
double a[L] ;
int n;
leerArray (a, &n) ;
printf("E1 array a tiene %d elementos, estos son\n ",n);
imprimirArray (a, n) ;
return 0;
}
void leerArray(double a[], int* num)
{
int n = 0;
puts("1ntroduzca datos. Para terminar pulsar 0.\n");
for (; n < L; n++)
{
printf ("%d: ",n);
scanf ("%lf",&a[n]);
if (a[n] == 0) break;
};
*num = n;
}
void imprimirArray(const double a[],int n)
{
int i = 0;
for (; i < n; i++)
printf ("\t%d: %lf\n",i,a[i]);
}
