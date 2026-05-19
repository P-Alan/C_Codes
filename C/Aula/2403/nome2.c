#include <stdlib.h>
#include <stdio.h>

int main()
{
    char nome[50];
    int i=0;
    int x;

    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    char ultimo = nome[0];

    while(i < x)
    {
        printf("%c", ultimo);
        i++;
    }
    return 0;
}