#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int i = 1, cinco;

    int dado;

    for (cinco = 1; cinco <= 5; i++)
    {
        dado = 1 + rand() % (6 - 1);

        if (dado == 5)
        {
            cinco++;
        }

        printf("\n===== RODADA %i =====\n", i);
        printf("Dado caiu: %i", dado);
    }

    return 0;
}