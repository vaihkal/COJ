#include <stdio.h>
int main() {
    float a, b, c;
    float r;
    //printf("escribe los tres numeros:\n")   ;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    a+=b+c;
    r=a/3;// r=(float)a/3;
    printf("el resultado es: %.2f\n", r)   ;
   // getchar();
   // getchar();
    return 0;
    }
