#include <stdio.h>
int main(){
	int a, u, j=0, i=0, z;
	printf("Ingresa un numero:\n");
	scanf("%d", &a);
	u=a;
	printf("El numero en binario es:\n");
	while(u>0){
		u/=2;
		j++;
		}
	int A[j];
	while(a>0){
		z=a%2;
		a/=2;
		A[i]=z;
		i++;
		}
	i--;
	while(i>=0){
		printf("%d", A[i]);
		i--;
	}
	printf("\n");
	return 0;
	}
