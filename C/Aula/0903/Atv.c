#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x, y;


    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o sagundo valor: ");
    scanf("%d", &y);

    
    if(x+y > 20){
        printf("Saída: %d", x+y+8);
    }

    if(x+y <= 20){
        printf("Saída: %d", x+y-5);
    }

    return 0;
}