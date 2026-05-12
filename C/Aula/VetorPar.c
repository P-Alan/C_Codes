#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int vet[10];

    int i = 0;

    while (i < 10)
    {
        int numero = 10 + rand() % (99-10);

        if (numero % 2 == 0)
        {
            vet[i] = numero;

            printf("[%i] ", vet[i]);

            i++;
        }
        
    }


    return 0;
}