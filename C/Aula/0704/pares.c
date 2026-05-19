#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;

    scanf("%i", &x);
    scanf("%i", &y);

    if(x < y)
    {
        if(x%2 == 1)
        {
            x -= 1;
        }

        if (y%2 == 0)
        {
            while (x < y)
            {
                x += 2;
                printf("%i\n", x);
            }
        }
        if (y%2 == 1)
        {
            y -= 1;
           while (x < y)
            {
                x += 2;
                printf("%i\n", x);
            } 
        }
        
    }
    else
        printf("X é maior ou igual a Y");
    return 0;
}