#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main ()
{
    char login[] = "admin", senha[] = "123";

    char login1[20], senha1[20];

    printf("Digite seu login e senha\n");
    printf("Login: ");
    scanf("%s", login1);
    printf("Senha: ");
    scanf("%s", senha1);

    int login_valido = strcmp(login, login1), senha_valida = strcmp(senha, senha1);

    if(login_valido != 0)
        printf("Login invalido\n");
    if(senha_valida != 0)
        printf("senha invalida\n");
    if(login_valido == 0 && senha_valida == 0)
        printf("Login valido");

    return 0;
}