#include <stdio.h>
#include <stdlib.h>

int main ()
{
    /*int w;*/
    int x; //'int' cria a variável 'x'
    x=7; //define o v alor de 'x'
    printf ("o valor de x é igual a: %d", x); //'%d' transforma o numeral em texto para aparecer no terminal. ', x' diz qual será a variável que vai aparecer no terminal

    float y; //'float' é igual ao 'int' so que para nnúmeros inteiros
    printf ("\ndigite um valor: ");
    scanf ("%f", &y); //'scanf' possibilita o usuário escrever no terminal. '%f' equivale ao '%d' para o float. ', &y' edita a variável 'y' de acordo com o valor colocado pelo usuário
    printf ("\nO valor de Y é igual a: %.2f", y); //'.2' limita a quantidade de casa depois da ','

    return 0;
}