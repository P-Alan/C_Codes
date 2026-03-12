#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float A, B, C;
    printf("Defina o valor de A, B, C: \n");

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    double delta = (B*B) - 4*A*C;
    double raiz = sqrt(delta);

    float res1 = (-B - raiz)/2;
    float res2 = (B - raiz)/2;

    if (delta > 0){
        printf("As duas raízes dessa equação são: %.2f e %.2f\n", res1, res2);
    }

    if (delta <= 0){
        printf("Essa conta não pode ser realizada.");
    }




    return 0;
}