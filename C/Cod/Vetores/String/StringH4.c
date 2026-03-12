#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 50

int main()
{
    char hardText[N] = {"26070048"};
    char senha_usr[N];
    int ok;

    printf ("Digite um texto:\n");
    gets(senha_usr);

    ok = strcmp(hardText, senha_usr);

    if (ok == 0)
        printf("Textos iguais. \n");
    else
        printf("textos diferentes. \n");

    return 0;
}