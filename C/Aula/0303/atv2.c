#include <stdlib.h>
#include <stdio.h>

int main()
{
    int id;

    printf ("Qual a sua idade?: ");
    scanf ("%d", &id);

    if(id >= 18){
        printf ("Você é maior de idade!");
    } else {
        printf ("Você é menor de idade!");
    }

    return 0;
}