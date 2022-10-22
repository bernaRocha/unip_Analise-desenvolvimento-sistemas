#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    char sexo;
    float peso;
    float altura;
} Pessoa;

#define QUANTIDADE_DE_PESSOAS 3

int main() {
    int i;
    char nomeloc[100];
    float imc;

    Pessoa pessoas[QUANTIDADE_DE_PESSOAS];
    printf("Campos: nome, altura, peso, sexo\n");
    for(i = 0; (i < QUANTIDADE_DE_PESSOAS); i++) {
        printf("\n Informe os dados da pessoa(%i): ", i + 1);
        scanf("%s %f %f %c", pessoas[i].nome, &pessoas[i].altura, &pessoas[i].peso, &pessoas[i].sexo);
    }
    printf("Informe o NOME da pessoa: ");
    scanf("%s", &nomeloc);
    printf("\nSexo\tNome\tIMC");

    for(i = 0; (i < QUANTIDADE_DE_PESSOAS); i++) {
        if (strcmp (pessoas[i].nome, nomeloc) == 0){ 
            float imc = pessoas[i].peso / (pessoas[i].altura * pessoas[i].altura);
            printf("\n%c\t%s\t%1.2f\n", pessoas[i].sexo, pessoas[i].nome, imc);
            break;
        }
    }
    system("pause");
    return 0;
}
