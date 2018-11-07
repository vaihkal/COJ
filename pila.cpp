#include <stdio.h>
#include <stdlib.h>
#define MAX_PILA 100

typedef int tipo_pila;//para que todos los de esa variable sean de ese tipo, 
typedef struct{//un nuevo tipo de dato definido por programador y sus funciones
	tipo_pila A[MAX_PILA];
	int tope;
	}pila;

void initStack (pila *p);//apuntador tipo pila (estructura)
void push(pila *p, tipo_pila dato);
tipo_pila pop (pila *p);
int isEmpty (pila p);
tipo_pila Top (pila p);
int getItems(pila p);
void ClearStack(pila *p);
int isFull (pila *p);

void initStack (pila *p){
	p->tope=-1;
	}

void push (pila *p, tipo_pila dato){
	if (++p->tope==MAX_PILA){
		printf("\n ERROR, ocurrio sobreflujo...\n");
		exit (0);
		}
	p->A[p->tope]=dato;
	}

tipo_pila pop (pila *p){
	if (p->tope < 0){
		printf("\n ERROR, ocurrio bajoflujo...\n");
		exit (0);
		}
	return p->A[p->tope--];
	}

int isEmpty (pila p){
	if(p.tope==-1)
		return 1;
	else
		return 0;
	}

tipo_pila Top (pila p){
	return p.A[p.tope];
	}

int getItems (pila p){
	return p.tope+1;
	}

void ClearStack (pila *p){
	p->tope=-1;
	}

int isFull (pila p){
	if (p.tope==MAX_PILA-1)
		return 1;
	else
		return 0;
	}
	int main(){
pila P1, P2;
	int i=0, x;
	char c;
	initStack(&P1);
	initStack(&P2);
	for(i=0;i<10;i++){
		printf("Ingresa un valor a la pila\n");
		scanf("%d", &x);
		push(&P1, x);
		}
	printf("Tope de la pila: %d\n", Top(P1));
	while(1){
		printf("Desea extraer un elemento de la pila?(S/n)\n");
		scanf("%c", c);
		if(c=='S' || c=='s') printf ("Elemento extraido %d", pop(&P1));
		else break;
		}
		
	for(i=0;i<10;i++){
		printf("Ingresa un valor a la pila\n");
		scanf("%d", &x);
		push(&P1, x);
		}
	printf("Tope de la pila: %d\n", Top(P2));
	while(1){
		printf("Desea extraer un elemento de la pila?(S/n)\n");
		scanf("%c", c);
		if(c=='S' || c=='s') printf ("Elemento extraido %d", pop(&P2));
		else break;
		}
ClearStack(&P1);
ClearStack(&P2);
}
