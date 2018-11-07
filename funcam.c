#include <stdio.h>
#include <stdlib.h>
struct camisa{
	char talla[4];
	char color[8];
	char material[15];
	int precio;
	char genero[10];
	};
void camisa(struct camisa *p);
void imp(struct camisa *s);
int main(){
	int i;
	struct camisa C[10];
	struct camisa *p;
	p=&C[0];
	for(i=0;i<10;i++){
    printf("ingresa la estructura %d\n", i+1);
           camisa(p);
           p++;
           }
	p=&C[0];
	for(i=0;i<10;i++){
    printf("para la estructura %d:\n", i+1);
		imp(p);
  p++;
		}
	return 0;
	}

void camisa(struct camisa *p){
     
			printf("genero\n");
			fflush(stdin);
			gets(p->genero);
			fflush(stdin);
			fflush(stdin);
			printf("precio\n");
			scanf("%d", &p->precio);
			fflush(stdin);
			printf("color\n");
			fflush(stdin);
			fflush(stdin);
			gets(p->color);
			fflush(stdin);
			fflush(stdin);
			printf("material\n");
			gets(p->material);
			fflush(stdin);
			fflush(stdin);
			printf("talla\n");
			fflush(stdin);
			gets(p->talla);
			fflush(stdin);
			fflush(stdin);
     }


void imp(struct camisa *s){
		printf("talla: %s\n", s->talla);
		printf("color: %s\n", s->color);
		printf("precio: %d\n", s->precio);
		printf("material: %s\n", s->material);
		printf("genero: %s\n", s->genero);
		printf("\n");
}
