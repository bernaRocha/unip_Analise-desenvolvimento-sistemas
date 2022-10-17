#include<stdio.h>

int main(){
    int i = 0, j = 10;

    do {
        printf("%d é menor que %d\n", i, j);
        i++;
    }
    while (i < j);
    printf("FIM\n");
    return 0;
}