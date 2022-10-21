#include <stdio.h>

int main(){
    float notas[5];
    float somatorio = 0;
    float media;

    printf("Preenchendo com valores o vetor: \n\n");

    for(int i = 0; i <= 4; i++) {
        printf("Nota [%d] = ", i);
        scanf("%f", &notas[i]);
        printf("\n------------------- \n");
        somatorio += notas[i];
    }

    media = somatorio / 5;

    printf("Exibindo os valores do vetor: \n\n");
    
    for(int i = 0; i <= 4; i++) {
        printf("Nota [%d] = %.1f\n", i, notas[i]);
    }
    
    printf("A média do aluno é: %.2f\n", media);
    
    return 0;
}