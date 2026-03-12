#include <stdlib.h>
#include <stdio.h>

int main () 
{
    int x;
    printf ("Diga um número de 1-3: ");
    scanf ("%d", &x);
    switch (x) {  //'Switch' muda a resposta a depender do valor de 'x'. Só aceita 'int'
        case 1:
            printf ("seu dia será incrível\n");
            break; //'break' obrigatório
        case 2:
            printf ("Você encontrará o amor da sua vida <3\n");
            break;
        case 3:
            printf ("Você realmente achou que as outras afirmações serão verdade?!\nVocê não vale nada, ninguém te ama e nenhum dia seu nunca será incrível, pare de buscar felicidade, você não merece isso.");
        default: //'Default' imprime o comando para cenários fora dos descritos
        printf ("Escreva um número\n");
    }

        return 0;
}