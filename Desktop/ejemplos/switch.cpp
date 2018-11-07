#include <stdio.h>
int main() {
    int var, x;
    scanf("%d", &var);
    switch (var){
           case 0: 
                printf("cero\n");
                break;
           case 1: 
                printf("uno\n");
                break;
           case 2: 
                printf("dos\n");
                break;
           case 3: 
                printf("tres\n");
                break;
           case 4: 
                printf("escribe otro\n");
                scanf("%d", &x);
                switch (x){
           case 0: 
                printf("zero\n");
                break;
           case 1: 
                printf("one\n");
                break;
           case 2: 
                printf("two\n");
                break;
           case 3: 
                printf("tree\n");
                break;
           case 4: 
                printf("four");
                break;
           case 5: 
                printf("five\n");
                break;
           case 6: 
                printf("six\n");
                break;
           case 7: 
                printf("seven\n");
                break;
           case 8: 
                printf("eight\n");
                break;
           case 'c': 
                printf("nine\n");
                break;
           default: 
                printf("another case :P\n");
                break;
           }
                break;
           case 5: 
                printf("cinco\n");
                break;
           case 6: 
                printf("seis\n");
                break;
           case 7: 
                printf("siete\n");
                break;
           case 8: 
                printf("ocho\n");
                break;
           case 'c': 
                printf("nueve\n");
                break;
           default: 
                printf("another case :P\n");
                break;
           }
   // getchar();
   // getchar();
    return 0;
    }
