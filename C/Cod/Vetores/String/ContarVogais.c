#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 51


int main()
{
    char s[N]; // Armazena a string
    
    int i, vogais = 0;

    printf("Digite uma frase qualquer (até 50 caaracteres): ");
    fgets (s, 50, stdin);

    for (i = 0; s[i] != '\0'; i++) {

        char c = s[i]; //Armazena a string 's' dentro dele e compara cada valor com a vogal, para cada vez que o valor for associado a uma casa com vogal, então a variável 'vogal' aumenta em 1
         
        if (c == 'a' || c == 'A' || c == 'b' || c == 'B' || c == 'c' || c == 'C' || c == 'd' || c == 'D' || c == 'e' || c == 'E') {
            vogais++;
        }
    }

    printf ("Foram contadas %d vogais", vogais);

    return 0;
}