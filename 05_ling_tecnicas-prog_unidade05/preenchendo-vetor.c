#include <stdio.h>

int main(){
    float notas[5];

    printf("Preenchendo com valores o vetor: \n\n");

    for(int i = 0; i <= 4; i++) {
        printf("Nota [%d] = ", i);
        scanf("%.2f", &notas[i]);
        printf("\n------------------- \n");
    }

    printf("Exibindo os valores do vetor: \n\n");
    
    for(int i = 0; i <= 4; i++) {
        printf("Nota [%d] = %.1f\n", i, notas[i]);
    }
    
    
    return 0;
}