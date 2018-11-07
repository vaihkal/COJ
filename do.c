#include <stdio.h>
int main(){
	int i=0;
	do{
		if (i==3){ 
		i++;
		continue;
		}
		printf("%d", i);
		i++;
		}
		while(i<10);
	printf("FIN\n");
	return 0;
	}
