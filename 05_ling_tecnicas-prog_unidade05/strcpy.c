#include<string.h>
#include<stdio.h>

void main() {
    char str1[100], str2[100], str3[100];
    puts("Digite a string 1: ");
    gets(str1);
    strcpy(str2, str1);
    strcpy(str3, "Você digitou a string: \n\n");
    printf("%s %s\n", str3, str2);
}