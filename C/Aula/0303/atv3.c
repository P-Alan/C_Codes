#include <stdlib.h>
#include <stdio.h>

int main()
{
    int mes;
    printf ("Digite o mês em numeral: ");
    scanf ("%i", &mes);

    if (mes == 1) {
        printf ("Janeiro");
    }
    if (mes == 2) {
        printf ("Fevereiro");
    }
    if (mes == 3) {
        printf ("Março");
    }
    if (mes == 4) {
        printf ("Abril");
    }
    if (mes == 5) {
        printf ("Maio");
    }
    if (mes == 6) {
        printf ("Junho");
    }
    if (mes == 7) {
        printf ("Julho");
    }
    if (mes == 8) {
        printf ("Agosto");
    }
    if (mes == 9) {
        printf ("Setembro");
    }
    if (mes == 10) {
        printf ("Outubro");
    }
    if (mes == 11) {
        printf ("Novembro");
    }
    if (mes == 12) {
        printf ("Dezembro");
    } 
    if (mes >= 13) {
        printf ("BURRO, SO VAI ATE 12!!!");
    }
    if (mes <= 0) {
        printf ("COMEÇA EM 1, ANIMAL!!!");
    }

    return 0;
}