#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int A[20], B[20], i=0, may=0, s=0, t, j=19, k=0;
	srand(time(NULL));
	for(i=0;i<20;i++){
		A[i]=rand()%10+1;
		}
	/*while(i<20 && j>9 && k<10){
		if(A[i]>may){
		may=A[i];
		B[k]=A[i];
		k++;
		}
		else{
		B[j]=A[i];
		j--;
		}
		i++;
		}*/
	for(i=0;i<10;i++){
		s+=A[i];
		}
		t=0;
	for(i=10;i<20;i++){
		t+=A[i];
		}
	if(s<t){
		for(i=20;i>0;i--){
		printf ("number %d: %d\n", i,  A[i]);
		}
		printf ("la suma de los 10 primeros: %d\n", t);
		printf ("la suma de los 10 ultimos: %d\n", s);
		}
	else{
	for(i=0;i<20;i++){
		printf ("number %d: %d\n", i+1,  A[i]);
		}
		printf ("la suma de los 10 primeros: %d\n", s);
		printf ("la suma de los 10 ultimos: %d\n", t);}
	return 0;
	
	}

