#include <stdio.h>

int main() {
    int x, vet[8], num, achei = 0;

    for(x = 0; x < 8; x++) {
        printf("\n[%d] Digite um número: ", x);
        scanf("%d", &vet[x]);
    }
    printf("\n\n");
    printf("Digite um valor a ser pesquisado: ");
    scanf("%d", &num);

    for(x=0; x<8; x++) {
        if(vet[x] == num) {
            printf("\n O número %d esta na posição %d: ", num, x);
            achei = 1;
        }        
    }

    if (achei != 1)
        printf("\n Este número não existe");
    printf("\n\n");
    system("pause");
    return 0;
}