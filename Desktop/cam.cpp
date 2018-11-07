#include <stdio.h>
#include <stdlib.h>
//#include <libio.h>//en funciones, en los ciclos , para grabar y para imprimir
int main(){
	int i;
	struct camisa{
		char talla[3];
		char color[5];
		char material[5];
		int precio;
		char genero[5];
		};
	struct camisa C[10];
	for(i=0;i<1;i++){
			printf("genero\n");
			fflush(stdin);
			gets(C[i].genero);
			fflush(stdin);
			fflush(stdin);
			printf("precio\n");
			scanf("%d", &C[i].precio);
			fflush(stdin);
			printf("color\n");
			fflush(stdin);
			fflush(stdin);
			gets(C[i].color);
			fflush(stdin);
			fflush(stdin);
			printf("material\n");
			gets(C[i].material);
			fflush(stdin);
			fflush(stdin);
			printf("talla\n");
			fflush(stdin);
			gets(C[i].talla);
			fflush(stdin);
			fflush(stdin);
		}
	for(i=0;i<1;i++){
			printf("talla\n");
			printf("%s\n",C[i].talla);
			printf("color\n");
			printf("%s\n",C[i].color);
			printf("material\n");
			printf("%s\n",C[i].material);
			printf("precio\n");
			printf("%d\n",C[i].precio);
			printf("genero\n");
			printf("%s\n",C[i].genero);
		}
	/*struct camisa *p;
	p=&C[0];
	for(i=0;i<1;i++){
		printf("talla\n");
		gets(p->talla);
			fflush(stdin);
			fflush(stdin);
		printf("color\n");
		gets(p->color);
			fflush(stdin);
			fflush(stdin);
		printf("material\n");
		gets(p->material);
			fflush(stdin);
			fflush(stdin);
		printf("precio\n");
		scanf("%d", &p->precio);
			fflush(stdin);
			fflush(stdin);
			fflush(stdin);
			fflush(stdin);
		printf("genero\n");
		gets(p->genero);
			fflush(stdin);
			fflush(stdin);
		p++;
		
		}
	for(i=0;i<1;i++){
		printf("talla\n");
		gets(p->talla);
			fflush(stdin);
			fflush(stdin);
		printf("color\n");
		gets(p->color);
			fflush(stdin);
			fflush(stdin);
		printf("material\n");
		gets(p->material);
			fflush(stdin);
			fflush(stdin);
		printf("precio\n");
		scanf("%d", &p->precio);
			fflush(stdin);
			fflush(stdin);
			fflush(stdin);
			fflush(stdin);
		printf("genero\n");
		gets(p->genero);
			fflush(stdin);
			fflush(stdin);
		p++;
		
		}*/
	return 0;
	}
