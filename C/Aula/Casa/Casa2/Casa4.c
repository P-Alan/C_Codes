#include <stdlib.h>
#include <stdio.h>

int main()
{

    int i;
    float pouso[2];

    for(i = 0; i < 2; i++){
        printf("Defina a coordenada X e Y (respectivamente) de pouso do drone: \n");
        scanf("%f", &pouso[i]);
    }

    if (pouso[0] >= 4 && pouso[0] <=14 && pouso[1] >= 4 && pouso[1] <= 10){
        printf("Pouso válido");
    } else if (pouso[0] >= 16 && pouso[0] <= 25.6 && pouso[1] >= 11.6 && pouso[1] <= 25.6){
        printf("Pouso válido");
    } else {
        printf("Pouso inválido");
    }
    
    return 0;
}