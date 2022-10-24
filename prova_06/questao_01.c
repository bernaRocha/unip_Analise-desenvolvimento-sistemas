#include <stdio.h>
// O erro da questão é que as variáveis "i" e “j” não precisavam ser um ponteiro.
void troca (int *i, int *j)
{
    int *temp;
    *temp = *i;
    *i = *j;
    *j = *temp;
} 