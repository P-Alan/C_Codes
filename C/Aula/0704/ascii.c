#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int x;
    int w = 0;
    printf("Digite 6 códigos da ASCII\n");
    while (a < 6)
    {

        scanf("%i", &x);
        if (x == 01000001 || x == 01000101 || x == 01001001 || x == 01001111 || x == 01010101 || x == 01100001 || x == 01100101 || x == 01101001 || x == 01101111 || x == 01110101)
        {
            w++;
        }
        a++;
    }
    printf("Foram digitadas %i vogais", w);
    return 0;
}