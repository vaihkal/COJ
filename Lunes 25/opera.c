#include <stdio.h>
float opera(char s, float x, float y);
int main(){
	float a, b;
	float op;
	char k;
	printf("Elige una de las opciones del menu:\n");
	printf("S o s -> Suma\n");
	printf("R o r -> Resta\n");
	printf("P o p -> Producto\n");
	printf("D o d -> Division\n");
	scanf("%c", &k);
	if(k=='s' || k=='S' || k=='r' || k=='R' || k=='p' || k=='P' || k=='d' || k=='D'){
	printf("Muy bien, Ahora ingresa dos numeros:\n");
	scanf("%f %f", &a, &b);
	op=opera(k, a, b);
	printf("Y tu resultado= %.2f\n", op);
    }
    else
         printf("Lo siento, solo las opciones que estan en el menu\n");
	return 0;
	}

float opera(char s, float x, float y){
	float result;
	switch (s){
	case 'S':
	result= x+y;
	break;
	case 'R':
	result= x-y;
	break;
	case 'P':
	result= x*y;
	break;
	case 'D':
	result= x/y;
	break;
	case 's':
	result= x+y;
	break;
	case 'r':
	result= x-y;
	break;
	case 'p':
	result= x*y;
	break;
	case 'd':
	result= x/y;
	break;
	}
	return result;
	}
