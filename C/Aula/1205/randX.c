#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int x;

    printf("Diga um valor inteiro: ");
    scanf("%i", &x);

    int numero = rand() % x;

    printf("%i", numero);

    return 0;
}