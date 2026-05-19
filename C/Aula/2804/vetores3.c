#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Diga o valor de 'n': ");
    scanf("%i", &n);

    char caracteres[n];

    scanf("%s", caracteres);

    return 0;
}