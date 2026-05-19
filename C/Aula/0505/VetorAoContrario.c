#include <stdlib.h>
#include <stdio.h>

int main()
{
    int N;

    printf("Diga o tamanho do vetor: ");
    scanf("%i", &N);

    char vetor[N];

    scanf("%s", vetor);

    for (N = N - 1; N >= 0; N--)
    {
        printf("%c", vetor[N]);
    }

    return 0;
}