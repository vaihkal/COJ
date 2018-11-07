#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int esPalindromo( int numero ) {

	char cadena[7]; 
	int j, i;

	itoa(cadena, numero, 10); 
	
	j = strlen(cadena); 	
	for( i = 0; j / 2; i++){
		
		if( cadena[i] != cadena[j-1] ){
			return 0;		
		}else{
			j--;		
		}
	}

	return 1; 
	
}

int main(){

	int bandera = 0;

	printf("%d", esPalindromo(9009) );
 /*
	while( !bandera ) {
		
		if( bandera ) {
			break; 		
		}
	}*/

	return 0; 
}
