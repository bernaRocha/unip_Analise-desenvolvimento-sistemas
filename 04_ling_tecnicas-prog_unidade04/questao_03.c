#include<stdio.h>

int main(){
    int a = 0, b = 0, n = 10;

    while (n > 0) {
        if(n % 2 == 0){
            a++;
        }else{
            b++;
        }
        n = n / 2;
    }
    
    printf("%d %d \n", a, b);

    return 0;
}