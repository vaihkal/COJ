#include <stdio.h>
using namespace std;
int main() {
	char str[100];
	while(1){
		scanf("%[^\n^+^-]", str);
		char str1=getchar();
		printf("%s", str);
		if (str1=='\n') break;

	}
	getchar();
	return 0;
}

char input[100], ch;
void main(void)
{
	freopen ("input.txt","rb", stdin);
	scanf("%s\n", &input);
	scanf("%c", &ch)
}
