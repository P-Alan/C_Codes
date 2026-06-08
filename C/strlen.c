#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main ()
{
    char nome[10];
    gets(nome);

    char vogais[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    int tamanho = 0;

    int i;

    int ligado;

    tamanho = strlen(nome);

    while (1)
    {
        for (i = 0; i < 10; i++)
        {
            if (nome[1] == vogais[i])
                ligado = 1;
            else
                ligado = 0;
        }
        break;
    }

    printf("Numero de caracteres: %i\n", tamanho);
    if (ligado == 1)
        printf("Começa com vogal\n");
    else
        printf("Não começa com vogal");

    return 0;
}