#include <stdio.h>
int main() {
    int a, b;
    float r;
    //printf("escribe los dos numeros:\n")   ;
    scanf("%d", &a);
    scanf("%d", &b);
    a+=b;
    r=a/2.0;// r=(float)a/2;
    printf("el resultado es: %.2f\n", r)   ;
   // getchar();
   // getchar();
    return 0;
    }
