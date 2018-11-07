#include <stdio.h>
#include <stdlib.h>
int main(){
	struct coordenada{
		int x;
		int y;
		}; //tambien se pueden declarar aqui, tambien se pueden crear arreglos C[10]
	struct coordenada c1, c2, c3, A[2]={1,2,3,4};
	c1.x=10;//C[0].x=2;, etcetera.
	c1.y=20;
	c2.x=5;
	c2.y=3;
	c3.x=0;
	c3.y=-2;
	//scanf("%d", &c2.x);//para recibir
	printf("%d\n", sizeof(c1));
	printf("%d\n", c3.y);//para imprimir
	printf("%d\n", A[2].y);//para imprimir
	return 0;
	}
