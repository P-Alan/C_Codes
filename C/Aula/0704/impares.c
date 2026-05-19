#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, impar = 0;
    

    scanf("%i", &x);

    for(y = 1; y <= x; y++ )
    {
        scanf("%i", &z);

        if(z%2 != 0)
        {
            impar++;
        }
    }

    printf("%i Sao impares", impar);

    return 0;
}