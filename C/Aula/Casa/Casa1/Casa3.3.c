#include <stdlib.h>
#include <stdio.h>

int main()
{
    int f;
    float p;

    printf("Digite quantas fitas a locadora comprou: ");
    scanf("%d", &f);
    printf("Digite o preço do aluguel da fita: ");
    scanf("%f", &p);

    //===== a. =====
    
    printf("O faturamento anual é de: %.2f\n", f*12*p/3);

    //===== b. =====

    printf("O faturamento por mês com multas é de: %.2f\n", f*0.3*p*0.1/10);

    //===== c. =====

    printf("O total de fitas que a locadora tem no final do ano é de: %.2f\n", (f*1.1)-(0.02*f));

    return 0;
}