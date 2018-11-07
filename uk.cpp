#include <stdio.h>
/* prototipos */
void imprimir(float a[], int n);
void intercambio(float *x, float *y);
void ordenar(float a[], int n);
int main(){
float a[10]={25.5,34.1,27.6,15.24,3.27,5.14,6.21,7.57,4.61,5.4};
imprimir(a,10);
ordenar (a, 10) ;
imprimir(a,10);
return 0;
}
void imprimir(float a[], int n)
{
int i;
for (i=0 ;i<n-1;i++) {
printf("%f \n",a[i]);
}
printf ("%f,%c",a[i],((i+1)%10==0 ? '\n' : ' '));
}
void intercambio(float *x, float *y)
{
float aux;
aux = *x;
*x = *y;
*y = aux;
}
/* ordenar burbuja */
void ordenar (float a[], int n)
{
int i, j;
for (i=n-1; i>0; i--)
for (j=0; j<i; j++)
if (a[i]>a[j+1])
intercambio(&a[j] ,&a[j+1]);
}
