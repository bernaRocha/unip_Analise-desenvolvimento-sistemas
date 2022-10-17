#include<stdio.h>

int main(){
    int n, n1, x;
    float media = 0;

    printf("Digite N: ");
    scanf("%d", &n);
    n1 = 0;

    while (n1 < n) {
        printf("Digite X: ");
        scanf("%d", &x);
        media += x;
        n1++;
    }
    
    printf("%f", media/n);

    return 0;
}