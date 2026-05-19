#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y = 0, z = 0;

    while(1)
    {
        scanf("%f", &x);

        if (x == 0)
        {
            break;
        }
        else 
        {
            printf ("Valor digitado: %.2f\n", x);

            printf("Valor incremento: %.2f\n", x + y);

            y = x;
        }

        
    }

    return 0;
}