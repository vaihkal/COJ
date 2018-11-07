#include <stdio.h>
void figuras(int z, int x);
int main(){
	int k, n, a,h=0, b,l=0, x;
	scanf("%d", &a);
	while(h<a){
	scanf("%d", &n);
	scanf("%d", &b);
	l=0;
	while(l<b){
	scanf("%d", &x);
	figuras(n, x);
	l++;
	}
	h++;
	}
	return 0;
	}
void figuras(int z, int x){
     int i, j;
switch (x){
	case 3:
	for(i=0;i<z;i++){
	for(j=0;j<i+1;j++){
		printf("*");
		}
	printf("\n");
		}
	break;
	case 1:
	for(i=0;i<z;i++){
	for(j=z;j>i;j--){
		printf("*");
		}
	printf("\n");
		}
	break;
	case 4:
	for(i=0;i<z;i++){
	for(j=0;j<z;j++){
		if(j>=z-i-1){
		printf("*");}
		else{
		printf(" ");
		}
		}
	printf("\n");
		}
	break;
	case 2:
	for(i=0;i<z;i++){
	for(j=0;j<z;j++){
		if(j>=i){
		printf("*");}
		else{
		printf(" ");
		}
		}
	printf("\n");
		}
	break;
	}
}
