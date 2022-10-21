#include<stdio.h>
void main(){
   int i, resultado, ant = 0, prox = 1;

   for(i = 0; i < 10; i++) {
   resultado = ant + prox;
   ant = prox;
   prox = resultado;
   printf("Iteração %d: %d \n", i, resultado);
   }
} 