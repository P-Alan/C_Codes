#include <stdlib.h>
#include <stdio.h>

int rodando;
float x= 0; 
float y= 0;

void soma()
{
    while (rodando == 1)
    {
        printf("SOMA = %.2f\n", x + y);
        rodando = 0;
    }
}

void sub()
{
    while (rodando == 1)
    {
        printf("SUBTRAÇÃO = %.2f\n", x - y);
        rodando = 0;
    }
}

void divi()
{
    while (rodando == 1)
    {
        printf("DIVISÃO = %.2f\n", x / y);
        rodando = 0;
    }
}

void mult()
{
    while (rodando == 1)
    {
        printf("MULTIPLICAÇÃO = %.2f\n", x * y);
        rodando = 0;
    }
}


int main()
{
    

    printf("Diga os valores de x e y: ");
    scanf("%f", &x);
    scanf("%f", &y);

    int menu = 1;
    int operacao;

    while (menu == 1)
    {
        printf("=====MENU=====\n");
        printf("Escolha seu cálculo");
        printf("\n1) soma\n2) subtrair\n3) dividir\n4) multiplicar\n5) sair\n");
        printf("==============");

        scanf("%d", &operacao);

        switch (operacao) {
            case 1:
                rodando = 1;
                soma();
                operacao = 0;
                break;
            case 2:
                rodando = 1;
                sub();
                operacao = 0;
                break;
            case 3:
                rodando = 1;
                divi();
                operacao = 0;
                break;
            case 4:
                rodando = 1;
                mult();
                operacao = 0;
                break;
            default :
                menu = 0;
        }
    }

    return 0;
}