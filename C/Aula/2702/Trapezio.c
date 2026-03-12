#include <stdlib.h>
#include <stdio.h>

int main()
{
    float base1, base2, alt, area;

    printf("digite o valor em cm da base menor de um trapézio: ");
    scanf("%f", &base1);
    printf("Agora digite o valor da base maior: ");
    scanf("%f", &base2);
    printf("Agora a altura: ");
    scanf("%f", &alt);
   
    area = (base1 + base2)*alt/2;

    printf("A aréa do trapézio com esses 3 valores é igual a: %.2f", area);

    return 0;
}