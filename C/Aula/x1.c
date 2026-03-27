#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    if (x > 100)
    {
        printf("Valor de X é maior que 100");
    }

    if (x < 100)
    {
        while(x < 101)
        {
            printf("%d\n", x);
            x++;
        }
    }
    if (x == 100) 
    {
        printf("X = 100");
    }
    return 0;
}