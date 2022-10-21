#include<stdio.h>

int main(){
    int x, i, soma = 0;
    int y = 10;
    for(i = 0; i < y; i++){
        printf("Digite o item [ %d ]: ", i);
        scanf("%d", &x);
        soma += x;
        y -= 1;
    }
    
    printf("TOTAL: %d\n", soma);
    return 0;

}