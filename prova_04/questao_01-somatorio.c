#include<stdio.h>

void main(){
    int i=1, num, result=0;

    printf("Digite 10 números: \n \n");
    while(i<=10){

    printf("Número %d: ", i);
    scanf("%d", &num);

    result += num;

    i++;
    }
    printf("Resultado: %d\n", result);
} 