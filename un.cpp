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
	
	void menu(int menu, int n);
pila P2;
	int select(){
         int s;
		printf("Selecciona una opcion\n");
		printf("1- limpiar pila\n");
		printf("2- insertar\n");
		printf("3- extraer\n");
		printf("4- tope\n");
		printf("5- vacia?\n");
		printf("6- llena?\n");
		printf("7- num elementos\n");
		printf("8- salir\n");
		
		scanf("%d", &s);
		return s;
         
         }
int main(){
	int i=0, x, s, n;
	char c;
	initStack(&P2);
		printf("Ingresa el tamaño de la pila\n");
		scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Ingresa un valor a la pila\n");
		scanf("%d", &x);
		push(&P2, x);
		}
		s=select();
		menu(s,n);
                   
              
               getchar();
               getchar();          
              return 0;      
        }


	void menu(int menu, int n){
         int i, x, h;
        switch(menu){
          case 1:
                 ClearStack(&P2);
         puts("regresar al menu= 0\n");
         scanf("%d", &h);
         if (h==0){  select();}
         else 
                 break;
          case 2:
                 
	for(i=0;i<n;i++){
		printf("Ingresa un valor a la pila\n");
		scanf("%d", &x);
		push(&P2, x);
		} 
         puts("regresar al menu= 0\n");
         scanf("%d", &h);
         if (h==0){  select();}
         else 
		break;
          case 3:printf ("Elemento extraido %d\n", pop(&P2));
         puts("regresar al menu= 0\n");
         scanf("%d", &h);
         if (h==0){  select();}
         else 
         break;
         case 4:
	     printf("Tope de la pila: %d\n", Top(P2));
         puts("regresar al menu= 0\n");
         scanf("%d", &h);
         if (h==0){  select();}
         else 
	     break;
	     case 5:
              if(isEmpty(P2)==1)
		printf("La pila esta vacia\n");
                   else 
		printf("La pila no esta vacia\n");
         puts("regresar al menu= 0\n");
         scanf("%d", &h);
         if (h==0){  select();}
         else
		break;
		case 6:
             if(isFull(P2)==1)
		printf("La pila esta llena\n");
                   else 
		printf("La pila no esta llena aun\n");
         puts("regresar al menu= 0\n");
         scanf("%d", &h);
         if (h==0){  select();}
         else 
		break;
		case 7:
		printf("el numero de elementos es: %d\n", getItems(P2));
         puts("regresar al menu= 0\n");
         scanf("%d", &h);
         if (h==0){  select();}
         else 
         break;
		case 8:
             exit (0);
          default:
                  puts("No disponible\n");
         puts("regresar al menu= 0\n");
         scanf("%d", &h);
         if (h==0){  select();}
         else break;
         }
         }
