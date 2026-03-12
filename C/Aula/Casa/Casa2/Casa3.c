#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float cent1[3], cent2[3];
    int i;

    for(i=0; i < 3; i++){
        printf("Defina as coordenadas do centro da primeira esfera:\n");
        scanf("%f", &cent1[i]);
    }

    for(i=0; i < 3; i++){
        printf("Defina as coordenadas do centro da segunda esfera:\n");
        scanf("%f", &cent2[i]);
    }

    float r1, r2;

    printf("Defina o raio da primeira e segunda esfera:\n");
    scanf("%f", &r1);
    scanf("%f", &r2);

    float dist = sqrt((cent1[0]-cent2[0])*(cent1[0]-cent2[0]) + (cent1[1]-cent2[1])*(cent1[1]-cent2[1]) + (cent1[2]-cent2[2])*(cent1[2]-cent2[2]));

    if(r1+r2 >= dist){
        printf("As esferas estão se tocando");
    } else {
        printf("As esferas não estão se tocando");
    }

    return 0;
}