#include <stdlib.h>
#include <stdio.h>

int main()
{
    float x, y, z;
    printf("Digite um número: ");
    scanf("%f", &y);

    printf("Digite outro número que calculará a porcentagem do primeiro numero: ");
    scanf("%f", &x);

    z = x/100;
    printf("%.2f porcento de %.2f é igual a: %.2f", x, y, z*y);

    return 0;
}