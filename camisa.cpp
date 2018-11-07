#include <stdio.h>
#include <stdlib.h>
void cam(char t, char *c, char *mat, int p, char g);
//#include <libio.h>//en funciones, en los ciclos , para grabar y para imprimir
int main(){
	int i;
	struct camisa{
		char talla;
		char color[10];
		char material[10];
		int precio;
		char genero;
		};
	struct camisa C[10];
	for(i=0;i<1;i++){
                     cam(talla, color,material,precio,genero,);
		}
	for(i=0;i<1;i++){
			printf("talla\n");
			printf("%c\n",C[i].talla);
			printf("color\n");
			printf("%s\n",C[i].color);
			printf("material\n");
			printf("%s\n",C[i].material);
			printf("precio\n");
			printf("%d\n",C[i].precio);
			printf("genero\n");
			printf("%c\n",C[i].genero);
		}
	return 0;
	}

void cam(char t, char *c, char *mat, int p, char g){
     
			printf("genero\n");
			fflush(stdin);
			scanf("%c", &C[i].genero);
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
			scanf("%c", &C[i].talla);
			fflush(stdin);
			fflush(stdin);
     }
