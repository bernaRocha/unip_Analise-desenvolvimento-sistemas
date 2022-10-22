#include <stdio.h>

typedef struct {
    int codigo;
    char nome[100];
    float preco;
} Produto;

#define QUANTIDADE_DE_PRODUTO 5

void main() {
    int i;
    int codigo_digitado;
    Produto produtos[QUANTIDADE_DE_PRODUTO];
    printf("Campos: codigo_do_produto nome preço \n");
    for(i = 0; i < QUANTIDADE_DE_PRODUTO; i++) {
        printf("\n Informe os dados do produto (%i): ", i + 1);
        scanf("%d %s %f", &produtos[i].codigo, produtos[i].nome, &produtos[i].preco); 
    }
    for (i = 0; i < QUANTIDADE_DE_PRODUTO; i++) {
        printf("\n %d \t %s R$ %.2f", produtos[i].codigo, produtos[i].nome, produtos[i].preco);
    }
    printf("\n Informe o código do produto: ");
    scanf("%d", &codigo_digitado);

    for(i = 0; i < QUANTIDADE_DE_PRODUTO; i++) {
        if (produtos[i].codigo == codigo_digitado) {
            printf("\n Preço: R$ %.2f \n", produtos[i].preco);
        }
    }
}