#include <stdlib.h>
#include <stdio.h>

int main()
{
    char nome[50];

    printf("Digite seu nome: ");
    fgets (nome, 51, stdin);

    char primeira = nome[0];

    int i = 0;
    while (i < 8){
        printf("A primeira letra é: %c\n", primeira);
        i++;
    }
    return 0;
}