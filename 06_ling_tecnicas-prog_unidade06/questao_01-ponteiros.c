#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int * ptr;
    int valor = 10;

    ptr = &valor;
    //printf("Valor de ptr com o endereço de valor = %d\n", ptr);

    printf("Endereço de valor = %x\n", &valor);
    printf("Endereço de ptr = %x\n", ptr);
    printf("Valor do ponteiro de ptr = %d\n", *ptr);

    // O ponteiro ptr armazena o endereço da variável valor 
    //e a variável &valor retorna o endereço de memória da variável valor
    
    printf("\n\n");
    return EXIT_SUCCESS;
}