/*String são informações de texto*/
/*\0 serve para ser colocado na ultima casa do vetor para informar ao pc que aquele é o fim da string. Ou seja, uma palavra de 10 caracteres precisa de um vetor com 11 posições*/
/*Entrada e saida da string:
- scanf()
    -Limitações: Sintaxe Robusta
    -Especificador: "%s"
    -Sintaxe: scanf("%s", <str>)  === não aceita espaço
    -Sintaxe aprimorada: scanf("%<tam -1>[^\n]s", <str>)  === facil de ter memória vazada
- printf()
    -Especificador: "%s"
    -Sintaxe: printf("<texto>", <str1>, <str2>, ..., <strN>);
- gets()
    -Limitações: estouro do limite do vetor
    -Sintaxe: gets(<string>);
- fgets()
    -último cara tere sempre fica reservado ao '\0'
    -Sintaxe: fgets(<string>, <tam>, stdin);
- puts() ===== Semelhante a um 'printf'
    -Imprime uma string diretamente na tela
    -Não admite outro tipo de variáveis
    -Sintaxe: puts(<string>);
*/



#include <stdlib.h>
#include <stdio.h>

int main ()
{
    char s[10]; //salva ate 9 caracteres
    printf("Digite algo (scanf convencional): \n");
    scanf("%9s", s); //o '9' limita quantos caracteres podem ser escritos
    
    while (getchar() != '\n'); //lê e descarta todos os caracteres até o 'enter'

    printf("resultado: %s \n\n", s);

    printf("Digite algo (scanf aprimorado): \n");
    scanf(" %9[^\n]", s);
    
    printf("resultado: %s\n", s);

    return 0;
}