#include<stdio.h>

int main() {
    /*variável inteiro */
    int a;
    /*variável ponteiro inteiro */
    int *p;

    a = 5;
    printf("Valor de a = %d\n", a);
    /* p recebe o endereço de a -> aponta para a */
    p = &a;
    printf("Valor de p com o endereço de a = %d\n", p);
    /* conteúdo de p recebe o valor 6 */
    *p = 6;
    printf("Valor de p = %d\n", p);
    printf("Valor do endereço de p = %d\n", *p);
    

}