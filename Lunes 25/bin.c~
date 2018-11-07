#include <stdio.h>
int bin(int i, int *a);
int main(){
	int a, u, j=0, i=0;
	printf("Ingresa un numero:\n");
	scanf("%d", &a);
	u=a;
	if (a>=0){
	if (a==0){
		printf("0");}
	printf("El numero en binario es:\n");
	while(u>0){
		u/=2;
		j++;
		}
	int A[j];
	while(a>0){
		A[i]=bin(i, &a);
		i++;
		}
	i--;
	while(i>=0){
		printf("%d", *(A+i));
		i--;	}
	}
	printf("\n");
	return 0;
	}
int bin(int i, int *a){
    	int z;
	z=*a%2;
	*a/=2;
	return z;
    	}
