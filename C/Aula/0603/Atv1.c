#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a, b;
    printf("defina o valor de 'a': ");
    scanf("%d", &a);

    printf("defina o valor de 'b': ");
    scanf("%d", &b);

    if(a == b){
        printf("Oss valores são iguais");
    }
    if(a != b){
        printf("Os valores são diferentes");
    }

    return 0;
}