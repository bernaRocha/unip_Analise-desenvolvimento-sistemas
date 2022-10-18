#include <stdio.h>

void main(){
    float t[3]; // vetor de 3 unidades
    int i;
    float soma, media;
    soma = 0;

    for(i = 0; i <= 2; i++) {
        printf("Digite a temperatura [%d]: \n", i); // registra 3 temperaturas
        scanf("%f", &t[i]);
        soma += t[i];     // soma as temperaturas
    }

    media = soma / 3;
    printf("\nA média das temperaturas é: %10.2f° \n", media); 

    for(i = 0; i <= 2; i++){
        printf("A diferença da temperatura [%d] é de %10.2f° \n", i, media-t[i], i);
    }


    return 0;
}
