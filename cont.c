#include <stdio.h>
int main(){
	int i=0;
	while(i<10){
		if (i==3){ 
		i++;
		break;
		}
		printf("%d", i);
		i++;
		}
	printf("FIN\n");
	return 0;
	}
