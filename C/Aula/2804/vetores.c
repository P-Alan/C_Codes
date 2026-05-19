#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[7] = {10, 5, 99, 87, 15, 13, 76};

    int i;

    for(i = 0; i<7; i++)
    {
        printf("[%i] ", vetor[i]);
    }

    return 0;
}