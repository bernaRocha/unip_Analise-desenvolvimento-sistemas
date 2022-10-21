#include <stdio.h>
 
void main() {
    int vi, vf, x;
    
    printf("Inicio: ");
    scanf("%d", &vi);

    printf("\n Fim: ");
    scanf("%d", &vf);

    for (x = vi; x <= vf; x += 2){
        printf ("%d ", x);
    } 

}