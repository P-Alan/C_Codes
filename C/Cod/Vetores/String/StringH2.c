#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 50

int main()
{
    char s1[N] = {"Lógica de"};
    char s2[N] = {" programação"};

    printf("Antes do strcat:\n");
    puts(s1);
    puts(s2);

    strcat(s1, s2);

    printf("Depois do strcat:\n");
    puts(s1);

    return 0;
}