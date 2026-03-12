/*Biblioteca string.h
-Sintaxe de funções importantes:
    -strcpy (<destino>, <origem>); //atualiza valores á strings no meio do código. NAO USA '='
    -strcat (<destino>, <origem>); //junta strings
    -strlen (<string>); //mostra o tamanho da string
    -strcmp (<string1>, <string2>); //compara igualdade entre strings, retornando '0' se for true
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 20 //

int main()
{
    char origem[N] = {"Olá mundo"};
    char destino[N];
    
    printf("Antes do strcpy:\n");
    puts(origem);
    puts(destino);

    strcpy(destino, origem);

    printf("Depois de strcpy:\n");
    puts(origem);
    puts(destino);

    return 0;
}