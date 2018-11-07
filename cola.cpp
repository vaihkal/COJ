#include <stdio.h>
#include <stdlib.h>
#define MAX_COLA 100
typedef int tipo_dato;
typedef struct {
        int frente;
        int final;
        tipo_dato lista[MAX_COLA];
        }cola;   
                    
int Qvacia(cola q){
    return (q.frente==q.final);
    }
    
int Qllena(cola q){
    return (q.frente==(q.final+1)%MAX_COLA);
    }

void crearCola(cola *q){
     q->frente=0;
     q->final=0;
     }
     
void insertCola(cola *q, tipo_dato dato){
     if(Qllena(*q)){
        puts("Desbordamiento cola");
        exit(1);
        }
     q->final=(q->final+1)%MAX_COLA;
     q->lista[q->final]=dato;
     }

tipo_dato quitarCola(cola *q){
          tipo_dato aux;
          if(Qvacia(*q)){
                        puts("Eliminacion de una cola vacia");
                        exit(1);
                        }
          q->frente=(q->frente+1)%MAX_COLA;
          aux=q->lista[q->frente];
          return aux;
          }
          
tipo_dato frente(cola q){
          tipo_dato aux;
          if (Qvacia(q)){
                         puts("Elemento de una cola vacia");
                         exit(1);
                         }
          return (q.lista[q.frente]%MAX_COLA);
          }
cola Q;
int main(){
    int x, i;
    crearCola(&Q);
    for(i=0;i<5;i++){
                     puts("Ingresa un valor a la cola");
                     scanf("%d", &x);
                     insertCola(&Q,x);
                     }
    printf("frente:%d\n",frente(Q));
    for(i=0;i<5;i++){
                     puts("un valor a la cola");
                     printf("Dato:%d\n",quitarCola(&Q));
                     }
    
    }
