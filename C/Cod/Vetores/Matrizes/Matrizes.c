/*======= Matrizes =======
-Podem ter várias dimensões
-Dois ou mais índices para acesso de posições
-Sintaxe
    <tipo> <nome> [<dim1>] [<dim2>] ... [<dimN>]  Obs: precisa dar um tamnho para cada dimensão
-Sintaxe para acessar a posição:
    <nome> [i1] [i2] ... [iN]    
-Sintaxe de inicialização:
    <declaração> = {{<l1>}, {<l2>}, ..., {<lN>}};   */
    
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int mat[3][3];

    //===== Inicialização =====

    mat[0][0] = 1;
    mat[0][1] = 2;
    mat[0][2] = 3;

    mat[1][0] = 4;
    mat[1][1] = 5;
    mat[1][2] = 6;

    mat[2][0] = 7;
    mat[2][1] = 8;
    mat[2][2] = 9;



    printf("Imprimindo a primeira linha: ");
    printf("%d %d %d", mat [0][0], mat[0][1], mat[0][2]);

    return 0;

}