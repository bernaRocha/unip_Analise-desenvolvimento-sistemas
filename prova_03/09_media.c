#include <stdio.h>
void main()
{
    int  totalFaltas;
    float n1, n2, media;
 
    printf("Digite a 1 a nota: ");
    scanf("%f", &n1 );
   
    printf("Digite a 2 a nota: ");
    scanf("%f", &n2);
   
    printf("Digite o total de faltas: ");
    scanf("%d", &totalFaltas);
   
    media = (n1 + n2) / 2;
   
     if(media >= 5){
        printf("Aprovado por nota");
        if(totalFaltas <= 10) {
           printf("e esta aprovado. \n");
     }else{
         printf(", mas reprovou por falta. \n") ;
 }
   }else{
           printf("Nota abaixo da media.");
   }
} 