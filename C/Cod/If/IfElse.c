#include <stdlib.h>
#include <stdio.h>

int main ()
{
    float x;
    printf ("Insira a nota do aluno: ");
    scanf ("%f", &x);
    if (x >= 7) {
        printf ("APROVADO!!!");
    } else { //Quando o valor do 'if' for falso o 'else' é executado
        printf ("REPROVOU!");
    }

    return 0;
}