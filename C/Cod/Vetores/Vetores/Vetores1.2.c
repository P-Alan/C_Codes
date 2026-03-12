#include <stdlib.h>
#include <stdio.h>

int main()
{
    int v[5];
    int i;

    for(i=0; i<5; i++){ //tomar cuidado para limitar o laço ao número de casas de memória do vator para evitar memória lixo
        printf ("digite um número: ");
        scanf ("%d", &v[i]);
    }

    for(i=0; i<5; i++){
        printf("Os valores digitados foram: %d\n", v[i]);
    }
}