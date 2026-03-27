#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x;

    printf("Diga um valor menor que 100 para X: ");
    scanf("%d", &x);
    if (x > 100)
    {
        printf("Diga um valor menor que 100 para X: ");
        scanf("%d", &x);
    }
    while (x < 100)
    {
        printf("%d\n", x);
        x++;
    }
    return 0;
}