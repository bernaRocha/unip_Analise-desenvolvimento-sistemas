#include <stdio.h>
#include <string.h>

int verifica_vogal (char V)
{
    if(V == 'a' || V == 'A' || 
       V == 'e' || V == 'E' || 
       V == 'i' || V == 'I' || 
       V == 'o' || V == 'O' || 
       V == 'u' || V == 'U') {
         return(1);
    } else {
         return(0);
    }
}

main () {
    char x;
    printf("Digite uma letra: ");
    scanf("%c", &x);

    if(verifica_vogal(x) == 1) {
        printf("\nA letra [ %c ] é uma vogal ", x);
    }
    else {
        printf("\nA letra [ %c ] é uma consoante ", x);
    }
        
    printf("\n\n");
    system("pause");
    return 0;
}