#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valores[5];

    int i;

    for (i=0; i<5; i++)
    {
        printf("Diga um valor: ");
        scanf("%f", &valores[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("[%.2f]", valores[i]);
    }
    return 0;
}