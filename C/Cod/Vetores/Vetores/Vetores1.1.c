#include <stdlib.h>
#include <stdio.h>

int main()
{
    int v[5] =  {10, 20, 30, 40, 50};
    int i;
    float s = 0;

    for(i=0; i<5; i++) {
        s += v[i]; //'+=' soma o valor apos o igual ao 's' e atualiza a variável
    }

    printf ("Média do vetor é igual a: %f\n", s/5);
}