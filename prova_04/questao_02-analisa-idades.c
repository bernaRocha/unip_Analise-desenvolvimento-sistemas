#include<stdio.h>
void main()
{
    int idade, contador21 = 0, contador50 = 0;

    printf("\n Digite a idade: ");
    scanf("%d", &idade);

    while(idade != -99)
    {
        if(idade<21)
        contador21++;
        else if(idade>50)
        contador50++;
        
        printf("\n Digite a idade (Para encerrar digite -99): ");
        scanf("%d", &idade);
    }
    printf("\n O total de pessoas com menos de 21 anos é: %d", contador21);
    printf("\n O total de pessoas com mais de 50 anos é: %d", contador50);
    printf("\n \n");
} 