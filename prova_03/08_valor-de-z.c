#include <stdio.h>
void main()
{
    int x, y, z;
    x = 5;
    y = 7;
    z = 3;
    if((y - 1) > 2){
           y = y + 2;
    }else{
           y = y - 2;
    }
    z = z + x + y;
    printf("Z = %d \n", z);
} 