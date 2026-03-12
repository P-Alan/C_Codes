#include <stdlib.h>
#include <stdio.h>
int main()
{
    char s[10];

    /*printf("Digite seu nome (gets):\n");
    gets(s); //NÃO É SEGURO
    fflush(stdin);

    puts("Resultado:");
    puts(s);
    puts("");*/

    printf("Digite algo (fgets):\n");
    fgets(s, 10, stdin);
    fflush(stdin);

    puts("Resultado:");
    puts(s);
    
    return 0;
}