#include <stdio.h>
int main(){
	int i=0, h=0;
	while(1){ // es lo mismo en un do while
		printf("Hola1!\n");
		h++;
		if(h==5) break;
		}
	h=0;
	for(;;){//while(1) / es lo mismo en un do while
		printf("Hola2 otra vez!\n");
		h++;
		if(h==10) break;
		}
	return 0;
	}
