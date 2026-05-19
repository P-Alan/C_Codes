#include <stdlib.h>
#include <stdio.h>

int main()
{
    int vetor[5] = {33, 45, 12, 56, 98};

    int i, soma = 0;

    for (i = 0; i < 5; i++)
    {
        soma += vetor[i];

        printf("[%i] ", soma);
    }


    return 0;
}