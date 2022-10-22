#include <stdio.h>

void main(){
    int lin, col, cont = 0, mat[4][4];
    for (lin=0; lin<=3; lin++) {
        for (col=0; col<=3;col++) {
            mat[lin][col] = cont++;
        } 
    }
    printf("Matriz \n");
    for (lin = 0; lin <= 3; lin++) {
        for (col = 0; col <= 3; col++)
        printf("%d \t", mat[lin][col]);
        printf("\n \n");
    }
    printf("\n \n Diagonal principal \n \n");
    for (lin = 0; lin <= 3; lin++) {
        printf("%d ", mat[lin][lin]);
    }
    printf("\n \n");
} 