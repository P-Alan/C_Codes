#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int i = 100;

    printf("Digite o valor de 'x': ");
    scanf("%d", &x);

    if(x > 100)
    {
        printf("Digite o valor de 'x': ");
        scanf("%d", &x);
    }

    while (x < 100)
    {
        printf("%d\n", i);
        i--;
        x++;
    }
    return 0;
}