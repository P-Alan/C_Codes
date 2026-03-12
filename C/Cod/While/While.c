#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int z = 1;
    int i = 1;
    int x;
    int y;
    int w;

    do {//'do-while' similar ao 'while', porém so verifica a variável ao final 
        printf ("bocó %d\n", z);
        z++;
    }while (z < 4);

    while (i <= 10) {//'while' cria um loop com referência em uma ou mais variáveis de controle. Lembrar de atualizar a variável para evitar loops infinitos
        printf ("%d\n", i);//'+1' também pode ser usado depois do 'i' para adicionar unidades a valor da variável
        i++; //'++' adiciona uma unidade e atualiza uma variável
    }

    if (i > 10) {
        printf ("'i' > 10\n");
    }

    
    for (x=1; x<=10; x++) {//'for' semelhante ao 'while', mas com sintaxe mais complexa e tudo fica embutido no comando
        printf ("nota do aluno %d: %d\n", x, x);
    }

    for (w=1; w<=10; w++){
        if (w == 5){
            continue; //'continue' faz o comando do laço ser ignorado quando a condição for verdade.
        }

        printf("%d ", w);
    }

    printf ("\n");

    for (y=1; y<=10; y++) {
        printf ("%d ", y);
        if (y == 5){
            break; //'break' interrompe o laço do 'for'. Não precisa do 'if' para funcionar.
        }
    }

    

    system ("pause");
} 