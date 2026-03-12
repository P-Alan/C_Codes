#include <stdlib.h>
#include <stdio.h>

int main()
{
    float preco;
    printf("diga quanto foi a conta: ");
    scanf("%f", &preco);

    printf("A conta deu %.2f sem gorjeta e %.2f com gorjeta", preco, preco*1.1);

    return 0;
}