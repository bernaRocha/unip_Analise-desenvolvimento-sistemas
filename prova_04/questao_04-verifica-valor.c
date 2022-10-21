#include <stdio.h>
void main()
{
    int num;

    printf("\n\n Digite um número entre 1 e 4: ");
    scanf("%d", &num);

    while(num < 1 || num > 4)
    {
        printf("\n Número inválido! ");
        printf("\n Digite novamente: ");
        scanf("%d", &num);
    }
    printf("\n\n O número digitado é: %d", num);
    printf("\n \n");
} 