#include <stdio.h>
int main(){
	long long int a, b, c, i, n=100;//unsigned -> sin signo,//long long -> 
	a=1; b=1;
	printf("%lld, %lld, ", a, b);
	for(i=1; i<n; ++i){
		c=a+b;
		b=a;
		a=c;
		printf("%lld\n", c);
		}
	return 0;
	
	}
