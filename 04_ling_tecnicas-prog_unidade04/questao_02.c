#include<stdio.h>

int main(){
    int n, n1, x;
    float media = 0;

    printf("Digite N: "); // para o número de notas
    scanf("%d", &n);
    n1 = 0;

    while (n1 < n) {
        printf("Digite X: "); // a nota em si
        scanf("%d", &x);
        media += x;
        n1++;
    }
    
    printf("%.2f", media/n);

    return 0;
}