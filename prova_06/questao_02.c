#include <stdio.h>
#include <stdlib.h>

//Recebe por parâmetro duas cadeias s1 e s2 e retorna uma nova cadeia s3 
//que contém todos os caracteres que aparecem em s1 e em s2.

char * caracteres(char *s1, char *s2) {
  int i, j, w, n = 0, encontrado;
  char *s3;
  for (i = 0; s1[i] != '\0'; i++) {
     for (j = 0; s2[j] != '\0'; j++) {
        if (s1[i] == s2[j]) {
            n++;
            break;
        }
     }
  }
  s3 = malloc((n + 1) * sizeof(char));
  n = 0;
  for (i = 0; s1[i] != '\0'; i++) {
      for (j = 0; s2[j] != '\0'; j++) {
          if (s1[i] == s2[j]) {
    encontrado = 0;
    for (w = 0; w < n; w++) {
         if (s3[w] == s1[i]) {
    encontrado = 1;
    break;
         }  
     }
   if (encontrado == 0) {
      s3[n] = s1[i];
      n++;
      break;
   }
   }  
     }
  }  
   s3[n] = '\0';
   return s3;
} 