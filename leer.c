#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
	{
	char N[1000000]; 
	long A[1000000];
	int i=0, j=0, z;
	//gets (N);
	while(gets (N) && j<10){
	i=0;
	z=strlen(N);
	while(N[i]!='\0'){
		A[i]=N[i];
		printf("%c", N[i]);
		i++;
		}
	printf("\n");
	while(A[i]!='\n'){
		printf("%ld", A[i]);
		i++;
		}
	printf("\n");
	printf("%d\n", z);
	j++;
	}
	return 0;
	}
