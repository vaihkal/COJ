#include <stdio.h>
int main() {
    char var;
    float a, b;
    printf("s o S=Suma\n");
    printf("r o R=Resta\n");
    printf("m o M=Multiplicacion\n");
    printf("d o D=Division\n");
    printf("elige una operacion que quieres realizar\n");
    scanf("%c", &var);
    printf("Ahora ingresa dos numeros:\n");
    scanf("%f", &a);
    scanf("%f", &b);
    switch (var){
           case 's': 
                a+=b;
                printf("a+b=%.1f\n", a);
                break;
           case 'r': 
                a-=b;
                printf("a-b=%.1f\n", a);
                break;
           case 'm': 
                a*=b;
                printf("axb=%.1f\n", a);
                break;
           case 'd': 
                a/=b;
                printf("a/b=%.1f\n", a);
                break;
           case 'S': 
                a+=b;
                printf("a+b=%.1f\n", a);
                break;
           case 'R': 
                a-=b;
                printf("a-b=%.1f\n", a);
                break;
           case 'M': 
                a*=b;
                printf("axb=%.1f\n", a);
                break;
           case 'D': 
                a/=b;
                printf("a/b=%.1f\n", a);
                break;
           default:
                   printf("Opcion no valida\n");
                   break;
           }
    getchar();
    getchar();
    return 0;
    }
