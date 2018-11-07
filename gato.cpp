#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>
#include <ctime>
int tablero[3][3] = {0};

void tira(int quien);
void dibujaTablero();
void juega();
int main(){
  srand(time(0));
  juega();
  getchar(); 
  getchar();
  return 0;
}

void tira(int quien){
  int x,y,JugadaValida=0;
  do{
    if(quien==1){
      x = rand()%3;
      y = rand()%3;
    }
    else{
      printf("Escriba coordenada (0..2, 0..2):");
      scanf("%d %d",&x,&y);;
    }
    if(x>=0&&x<=2&&y>=0&&y<=2){
      if(tablero[x][y]==0)
         JugadaValida=1;
      else
         JugadaValida=0;
    }
  }while(!JugadaValida);
  if(quien==1)
    printf("Maquina tira en %d, %d ",x,y);
  tablero[x][y] = quien;
}

void dibujaTablero(){
  int i,j;
  char c;
  printf("\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      switch(tablero[i][j]){
        case 0:c = ' ';break;
        case 1:c = 'X';break;
        case 2:c = '0';break;
      }
      printf(" %c ",c );
      if(j<2)printf("|");
    }
    printf("\n");;
    if(i<2)printf("---+---+---\n\n");
  }
}

void juega(){
  int turno = rand()%2+1,jugada=0;
  dibujaTablero();
  do{
    tira(turno);
    dibujaTablero();
    if(turno==2) turno=1;
    else turno=2;
    jugada++;
  }while(jugada<9);
}
