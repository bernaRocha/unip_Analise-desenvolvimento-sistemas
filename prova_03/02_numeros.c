#include <stdio.h>

void main (void){
 int a, b, c;
 int aux;
 
 printf("Digite três números inteiros: ");
 scanf("%d %d %d",&a, &b, &c);
 if(a>b)
 {
    aux=a;
    a=b;
    b=aux;
 }
 if(a>c)
 {
    aux=a;
    a=c;
    c=aux;
 }
 if(b>c)
 {
    aux=b;
    b=c;
    c=aux;
 }
 printf("%d %d %d", a, b, c);
} 