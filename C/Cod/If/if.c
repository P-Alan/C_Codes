#include <stdlib.h>
#include <stdio.h>

int main () 
{
    float m;
    printf ("Insira a nota do aluno: ");
    scanf ("%f", &m);
    if (m <= 4) { 
        printf ("Aluno REPROVADO!");
    }
    if (m >= 4 && m < 7.0) { //'&&' tem o valor do 'e' das operações lógicas. '!' tem o valor do ¬ e vem no começo do '()' do 'if'. '||' tem valor de 'ou'
        printf ("Aluno com direito a recuperação!\n");
    }

    if (m >= 7) { //Se a condição for V, tudo dentro do "{}" roxo é executado. Condição é verificada por condicionais; Maior >, Maior ou igual >=, Menor <, Menor ou igual <=, Igual ==, Diferente !=.
        printf ("Aluno APROVADO!");
    }
}