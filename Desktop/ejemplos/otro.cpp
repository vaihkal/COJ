#include <stdio.h>
int main() {
    int var, i;
    scanf("%d", &var);
    switch (var){
           case 3: 
                printf("I");
           case 2: 
                printf("I");
           case 1: 
                printf("I");
                break;
           case 4: 
                printf("I");
           case 5: 
                printf("V");
                break;
           case 6: 
                printf("V");
                var-=5;
                for(i=0; i<var; i++){
                         printf("I");
                         }
                break;
           case 7:  
                printf("V");
                var-=5;
                for(i=0; i<var; i++){
                         printf("I");
                         }
           case 8:  
                printf("V");
                var-=5;
                for(i=0; i<var; i++){
                         printf("I");
                         }
                
           default: 
                printf("falto terminar el programa :P\n");
                break;
           }
   // getchar();
   // getchar();
    return 0;
    }
