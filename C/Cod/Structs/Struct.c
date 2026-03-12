/*===== Struct =====
-Struct consegue criar diferentes tipos de dados: 'typedef'
-Sintaxe
    struct <novo_tipo>{
        <tipo1> <campo1>;
        <tipo2> <campo2>;
        ...
        <tipoN> <campoN>;
    };
-Sintaxe de declaração de variável (complexa)
    struct <novo_tipo> <nome_variável>;

-Sintaxe de declaração de variável (simples)
    typedef <tipo> <novo_nome>;
    ===========================
    <novo_nome> <nome_variável>;

-É preciso haver uma variável desse tipo declarada
    -Sintaxe
        <variável>.<campo>
-É comum misturar vetores e structs
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 50

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){


    //Criando e inicializando

    tipo_pessoa pes = {0, 0.0, "Teste"};

    printf("Ínicio:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);


    //Atribuindo novos valores aos campos

    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "texto");

    printf("\nAlterando os valores pelo código:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);


    //Solicitando inserções via teclado

    printf("\ninsira sua idade: ");
    scanf("%d", &pes.idade);
    printf("insira seu peso: ");
    scanf("%f", &pes.peso);
    printf("insira seu nome: ");
    scanf("%s", &pes.nome);

    printf("\nAlterando valores via usuário:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s", pes.nome);


    return 0;
}