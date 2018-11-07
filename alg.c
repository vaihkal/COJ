#include <stdio.h>
int main(){
	int i,j, k, n=10;
	for(k=0;k<4;k++){
	for(i=0;i<10;i++){
	for(j=0;j<i;j++){
		printf("*");
		}
	printf("\n");
		}
	for(i=0;i<10;i++){
	for(j=10;j>i;j--){
		printf("*");
		}
	printf("\n");
		}
	for(i=0;i<10;i++){
	for(j=0;j<10;j++){
		if(j>=10-i){
		printf("*");}
		else{
		printf(" ");
		}
		}
	printf("\n");
		}
	for(i=0;i<10;i++){
	for(j=0;j<10;j++){
		if(j>=i){
		printf("*");}
		else{
		printf(" ");
		}
		}
	printf("\n");
		}
	printf("\n");
		}
	getchar();
	getchar();
	return 0;
	}
