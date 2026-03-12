#include <stdlib.h>
#include <stdio.h>

int main()
{
    float d, t, v, l;

    printf("digite quantos km tem da cidade A até a B:");
    scanf("%f", &d);
    printf("Agora diga quanto tempo, em horas, você levrá para concluir o trajeto: ");
    scanf("%f", &t);

    printf("A velocidade média desse trajeto é: %.2f\n", d/t);
    printf("O tempo gasto será de: %.2fh\n", t);
    printf("O trajeto tem: %.2fkm\n", d);
    printf("Serão gastos %.2f L\n", 12*d);

    return 0;
}