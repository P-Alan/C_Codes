#include <stdlib.h>
#include <stdio.h>

int main()
{
    int N;

    printf("Diga o tamanho do vetor: ");
    scanf("%i", &N);

    char string[N];

    scanf("%s", string);

    for(N = 0; string[N] != '\0'; N++)
    {
        if(string[N] == 'a' || string[N] == 'A' || string[N] == 'e' || string[N] == 'E' || string[N] == 'i' || string[N] == 'I' || string[N] == 'o' || string[N] == 'O' || string[N] == 'u' || string[N] == 'U')
        {
            puts(string);
        }
    }

    return 0;
}