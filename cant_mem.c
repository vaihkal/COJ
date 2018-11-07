#include <stdio.h>
#include <stdlib.h>
//* hard core 0
int main(void){
	void *pnt;
	int i=1, p; 
	long s=0;
	for(i=1; ;i++){
	pnt=malloc(1000000);
	if(pnt==NULL)break;
	
		s+=1; }
	printf("memoria disponible %ld", s);
	free(pnt);
	getchar();
	getchar();
	return 0;
	}
