#include <stdio.h>

int main(){

int i = 0;
int cont = 2;
int serie = 0; 
int j = 1;   
long suma = 0; 
		
	serie = 1; 
	for( i = 0; i < (2001); i++ ) {
		
		

		suma += serie; 
		serie += cont; 
		

		if( i == 0 ) {
			continue; 			
		}else{
			j++;
		}

		if( j == 4 ) {
			cont += 2; 
			j = 0; 	
		}
	}

	printf("%ld \t", suma);

	return 0; 
}
