#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x;

    printf("Escreva o valor de 'X': ");
    scanf("%d", &x);

    if (x > 0){
    printf("O valor de 'x' é %d, e é positivo", x);

    
    } else if (x == 0){
        printf ("O valor de 'x' é igual a '0'");
    } 
    
    
    else {
    printf("O valor de x é %d, e é negativo", x);
    }

    return 0;
}