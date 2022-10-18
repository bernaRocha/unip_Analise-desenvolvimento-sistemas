#include<stdio.h>
#include<string.h>

void main() {
    char cadeia1[100], cadeia2[50];
    puts("Digite a string1: ");
    gets(cadeia1);

    puts("Digite string2: ");
    gets(cadeia2);

    strcat(cadeia1, cadeia2);
    puts(cadeia1);
}