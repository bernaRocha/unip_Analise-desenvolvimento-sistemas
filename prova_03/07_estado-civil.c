#include <stdio.h>
void main ( )
{
 char ch;
 printf ("Estado civil: ");
 scanf ("%c", &ch);
 switch(ch) {
    case 'C':
       printf ("Casado \n");
       break;
    case 'S':
       printf ("Solteiro \n");
       break;
    case 'D':
       printf ("Divórcio \n");
       break;
    case 'V':
       printf ("Viúvo \n");
       break;
    default:
       printf("Inválido \n");
       break;
 }
} 