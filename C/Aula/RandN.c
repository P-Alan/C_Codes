#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int a, n, b, i;

    printf("Diga um valor inteiro para N: ");
    scanf("%i", &n);

    printf("Diga um valor inteiro para A: ");
    scanf("%i", &a);

    printf("Diga um valor inteiro para B: ");
    scanf("%i", &b);

    for (i = 0; i < n; i++)
    {
        if(a < b)
        {
            int numero = a + rand() % b;
            printf("[%i] ", numero);
        }
    }

    return 0;
}