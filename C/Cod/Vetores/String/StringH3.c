#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 50

int main()
{
    char s[N];
    int i;

    printf("digite um texto:\n");
    gets(s);
    i = strlen(s);
    printf("\nTamanho de do texto: %d\n\n", i);

    printf ("Impressão de posição:\n");
    for(i=0; i<strlen(s); i++){
        printf ("%c", s[i]); //'%c' imprime posição a posição
    }

    return 0;
}