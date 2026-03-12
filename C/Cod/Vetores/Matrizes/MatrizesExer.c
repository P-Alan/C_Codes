#include <stdlib.h>
#include <stdio.h>

int main()
{
    int A, B, C;
    int matA[2][3];
    int matB[2][3];
    int matC[2][3];
    int i, j;

    printf("digite os valores da matriz A: \n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }

    printf("Digite os valores da matriz B: \n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }

    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }

    printf("Matriz C é igual a: \n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d ", matC[i][j]);
        }
        printf("\n");
    }

    return 0;
}