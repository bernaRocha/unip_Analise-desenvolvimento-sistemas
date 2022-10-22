#include <stdio.h>
#include <math.h>
 
float calcular (float x, float y, float z)
{
   return (pow(x,2)+(y+z));
}
 
void main()
{
    printf("Resultado: %.2f \n", calcular(2,3,4));
    printf("\n \n");
}
