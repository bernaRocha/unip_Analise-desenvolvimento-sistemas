#include <stdio.h>
#include <string.h>

int main() {
    char c = 97;
    printf("%d %c\n", c, c); // 97 a

    char cadeia[256];
    printf("Escreva seu nome: ");
    scanf("%s", &cadeia);
    printf("Seu nome é %s\n", cadeia);

    gets(cadeia);
    puts(cadeia); // não é possível fazer tratamento como o printf

    int tam; char str[100];
    printf("Digite uma string: ");
    gets(str);

    tam = strlen(str);
    printf("O tamanho da string é: %d\n", tam);
    return 0;
}