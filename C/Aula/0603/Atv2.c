#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a;
    float r = a % 5;

    printf("Defina o valor de 'a': ");
    scanf("%d", &a);

    if(r != 0){
        printf("Não é múltiplo de 5");
    }

    return 0;
}