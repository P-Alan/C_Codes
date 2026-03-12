#include <stdlib.h>
#include <stdio.h>

int main ()
{
    float A = 5000000;
    float B = 7000000;
    float ano = 1;
    while ( A < B ) {
        A *= 1.03;
        B *= 1.02;
        ano++;
    }

    printf ("A cidade 'A' levará %.0f anos para passar a cidade B", ano);
    return 0;
}