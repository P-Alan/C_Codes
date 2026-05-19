#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0, y, z, a;
    scanf("%i", &z);

    a = z;
    y = a;
    while (y >= 1)
    {
        y = a;
        x += y;
        a--;
    }

    printf("Fatorial de %i: %i", z, x);

    return 0;
}