#include <stdlib.h>
#include <stdio.h>

int main()
{
    float dia, hora;
    printf("Digite o dia de hoje -somente o dia, sem mês e ano: ");
    scanf("%f", &dia);
    hora = dia*24;
    printf("fazem %.2f horas desde o começo do mês!", hora);
    return 0;
}