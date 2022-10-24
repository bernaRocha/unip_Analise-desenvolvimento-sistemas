#include <stdio.h>
 
int func (int n)
{
    if (n == 0)
    return(0);
    return(n + func(n-1));
}
 
void main(){
    int a, b;
    printf("Digite um valor inteiro: ");
    scanf("%d", &a);
    b = func(a);
    printf ("%d \n", b);
} 