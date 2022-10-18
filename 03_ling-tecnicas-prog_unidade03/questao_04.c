#include <stdio.h>

int main(){
    char nome[40] = "Bernardo";
    int faltas = 0;
    float media = 8.9;

    printf("Olá %s, você tem [%d] faltas e sua média é -> %.2f.\n", nome, faltas, media);
    // Olá Bernardo, você tem [0] faltas e sua média é -> 8.90.

    return 0;
}