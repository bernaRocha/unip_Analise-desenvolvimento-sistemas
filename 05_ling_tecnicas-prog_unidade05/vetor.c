#include <stdio.h>

int main(){
    float notas[4] = {7, 8.9, 5.7, 10.0} ;

    printf("Exibindo os valores do vetor: \n");

    for(int i = 0; i <= 3; i++) {
        printf("Nota[%d] = %.1f\n", i, notas[i]);
        /*
        Exibindo os valores do vetor: 
        Nota[0] = 7.0
        Nota[1] = 8.9
        Nota[2] = 5.7
        Nota[3] = 10.0
        */

    }
    return 0;
}