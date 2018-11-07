#include <stdio.h>
int main()
	{
	char N[1000];
	int n,x=0, s=1, t=0, h, l, i, j;
	//long i, j;
	while(gets (N) && s<=3){
		scanf("%d", &n);
		printf("Case %d:\n", s);
		t=0;
		while(t<n){
		scanf("%d %d",&i, &j);
		if (i<=j){
			h=j;	
			x=0;
			l=i;	
		while(N[l]!='\0' && l<=j){
			if (N[l]==N[h]){
				x++;
			}
			else {
				break;
			}
			h--;
			l++;
			}

		if (x==j-i){
			printf("Yes\n");
			}
		else {
			printf("No\n");
			}
			}
		t++;
		}
		s++;
		}
	return 0;
	}
