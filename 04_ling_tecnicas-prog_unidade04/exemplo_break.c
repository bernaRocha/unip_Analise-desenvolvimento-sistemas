#include<stdio.h>

int main(){

    int i = 0, soma = 0, x;

    while (i < 10) {
        printf("Digite o item [%d] - (num negativo para encerrar): ", i);
        scanf("%d", &x);

        if(x < 0){
            printf("Número inválido!");
            break;
        }

        soma += x;
        i += 1;
    }
    
    printf("TOTAL: %d\n", soma);

    return 0;
}