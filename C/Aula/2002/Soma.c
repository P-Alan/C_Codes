#include <stdlib.h>
#include <stdio.h>

int main () 
{

    float x, y;
    printf("digite um número: ");
    scanf("%f", &x);
    printf("\ndigite outro número: ");
    scanf("%f", &y);

    printf("\nA soma é igual a: %.2f\n", x + y);
    system ("pause"); //'system' imprime um comando no terminal do arquivo .exe
    return 0;
}