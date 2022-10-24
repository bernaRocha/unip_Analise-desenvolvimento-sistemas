#include <stdio.h>
// O erro da questão é que a variável "temp" não precisava ser um ponteiro 
void troca (int *i, int *j)
{
    int *temp;
    *temp = *i;
    *i = *j;
    *j = *temp;
} 