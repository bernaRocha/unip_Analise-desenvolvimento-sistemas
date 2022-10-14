#include <stdio.h>
main()
{
 int idade;
 printf("Digite a idade: ");
 scanf("%d",&idade);
 if (idade <10){
    printf ("A idade %d é classificada como CRIANÇA \n \n ", idade);
 }
     else if ((idade >=10) && (idade <=14)){
    printf ("A idade %d é classificada como INFANTIL \n \n ", idade);
 }
 else if ((idade >=15) && (idade <=17)){
    printf ("A idade %d é classificada como JUVENIL \n \n ", idade);
 }
 else if (idade >=18) {
    printf ("A idade %d é classificada como ADULTO \n \n ", idade);
 }
 else{
         printf("Classificação inválida");
 }
} 