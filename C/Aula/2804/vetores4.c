#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i;

    int valores[6];

    for (i = 0; i < 6; i++)
    {
        printf("Diga um valor: ");
        scanf("%i", &x);
        if(x%2 == 0)
        {
            valores[i] = x;
        }
        else
        {
            valores[i] = 0;
        }
    }

    for(i = 0; i < 6; i++)
    {
        if (valores[i]<valores[i+1])
        {
            x = valores[i+1];
        }
    }

    printf("%i", x);
    
    return 0;
}