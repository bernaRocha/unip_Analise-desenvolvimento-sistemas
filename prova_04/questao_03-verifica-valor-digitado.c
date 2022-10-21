#include<stdio.h>

void main(){
    int num = 1;
    while(num != 0) {
        printf("Digite um número diferente de zero: ");
        scanf("%d", &num);
        printf("Número digitado %d\n\n", num);
    }
    printf("Número digitado: %d \n Programa Finalizado! \n", num);
} 