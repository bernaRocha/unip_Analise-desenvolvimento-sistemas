#include<stdio.h>

int main(){
    printf("%d %.2f\n", 34, 5.6);       // 34 5.60
    printf("|%4d| |%7.2f|\n", 53, 5.9); // |  53| |   5.90|
    printf("a-> %10d\n", 1);                // a->          1
    return 0;
}