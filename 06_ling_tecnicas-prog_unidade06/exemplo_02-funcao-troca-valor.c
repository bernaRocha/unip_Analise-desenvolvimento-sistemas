#include <stdio.h>

void troca(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


int main(void) {
    int a = 7, b = 5;
    printf("Antes da troca:\n a = %d, b = %d", a, b);

    troca(&a, &b);

    printf("\nApós a troca:");
    printf("\n a = %d b = %d", a, b);
    printf("\n\n");
    return 0;
}