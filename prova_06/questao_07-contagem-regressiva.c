#include <stdio.h>
 
void f2(int n)
{
 if (n == 0)
     printf("zero ");
 else
 {
     printf("%d ", n);
     f2(n-1);
 }
}
 
void main(){
 int a;
 printf("Digite um valor inteiro: ");
 scanf("%d", &a);
 f2(a);
 printf("\n");
} 