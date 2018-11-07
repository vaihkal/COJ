#include <stdio.h>

int main(){

	int b1, b2; 
	int numero, i; 

	b1 = b2 = numero = i = 0; 
	numero = 21; 
	while( !b1 ) {

		b2 = 0; 
		

		for( i = 1; i <= 20; i++) {

			if( numero % i != 0 ){
				b2 = 1; 
				break; 			
			}
		}
			
		if( b2 == 0 ) {
			b1 = 1;
			break; 	
		}
	
		numero++; 
	}
	
	printf("%d\n", numero) ; 


	return 0; 
}
