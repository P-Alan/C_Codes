#include <stdlib.h>
#include <stdio.h>

int main()
{
    int v[5]; //'v' consegue é uma variável que armazena a quantidade de valores igual ao número entre '[]'
    float m;

    v[0] = 50; //começa no '0'
    v[1] = 40;
    v[2] = 30;
    v[3] = 20;
    v[4] = 10; //termina no valor entre '[]' -1

    m = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5;

    printf ("Vetor têm média: %.02f\n", m);
}