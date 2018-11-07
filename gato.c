#include <stdio.h>
#include <stdlib.h>
//#include <iostream.h>
//#include <ctime>
int tablero[3][3] = {0};

void tira(int quien);
void dibujaTablero();
void juega();
void compara();
int main(){
  srand(time(0));
  juega();
	compara();
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
  int i,j, s=0, t=0, u=0;
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
void compara(){
	int s=0, t=0, u=0, i=0;
				if(tablero[0][0]==tablero[1][1] && tablero[1][1]==tablero[2][2] || tablero[0][2]==tablero[1][1] && tablero[1][1]==tablero[2][0]){
					s++;}
		while(i<3 && tablero!=1){
				if(tablero[i][0]==tablero[i][1] && tablero[i][1]==tablero[i][2]){
					t++;}
					i++;
					}
					i=0;
		while(i<3){
				if(tablero[0][i]==tablero[1][i] && tablero[1][i]==tablero[2][i]){
					u++;}
					i++;
					}
		printf("%d %d %d\n", s, t, u);
	if(s>=1 || t>=1 || u>=1){
		printf("ganador\n");}
	}
