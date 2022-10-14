#include <stdio.h>
void main()
{
    int num, resto;
    printf("Digite um numero: ");
    scanf("%d", &num);
    resto = num % 2;
    if(resto == 1){
        printf("O número %d é impar \n", num);
    }else{
        printf("O número %d é par \n", num);
    }
} 