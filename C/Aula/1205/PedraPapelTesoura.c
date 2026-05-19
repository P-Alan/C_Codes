#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int i, bot, pontosBot = 0, pontosJogador = 0, escolha;

    for (i = 0; i < 3; i++)
    {
        printf("Escolha um\n[1] Pedra [2] Papel [3] Tesoura\n");
        scanf("%i", &escolha);

        bot = 1 + rand() % (3-1);

        // Vitória do BOT
        if(bot == 1 && escolha == 3 || bot == 2 && escolha == 1 || bot == 3 && escolha == 2)
        {
            pontosBot += 3;
            printf("BOT GANHOU!!!\n");

            if(escolha == 1)
            {
                printf("Bot jogou 'Papel' e você jogou 'Pedra'\n");
            }
            if(escolha == 2)
            {
                printf("Bot jogou 'Tesoura' e você jogou 'Papel'\n");
            }
            if(escolha == 3)
            {
                printf("Bot jogou 'Pedra' e você jogou 'Tesoura'\n");
            }
            printf("===== PONTOS =====\n");
            printf("Bot: %i\nJogador: %i\n", pontosBot, pontosJogador);
        }

        // Vitória do Jogador
        if(bot == 3 && escolha == 1 || bot == 1 && escolha == 2 || bot == 2 && escolha == 3)
        {
            pontosJogador += 3;

            printf("JOGADOR GANHOU!!!\n");

            if(bot == 1)
            {
                printf("Bot jogou 'Pedra' e você jogou 'Papel'\n");
            }
            if(bot == 2)
            {
                printf("Bot jogou 'Papel' e você jogou 'Tesoura'\n");
            }
            if(bot == 3)
            {
                printf("Bot jogou 'Tesoura' e você jogou 'Pedra'\n");
            }
            printf("===== PONTOS =====\n");
            printf("Bot: %i\nJogador: %i\n", pontosBot, pontosJogador);
        }

        if(bot == escolha)
        {
            pontosBot++;
            pontosJogador++;

            printf("EMPATE\n\n");
        }
    }

    printf("O ganhador foi: ");
    if(pontosBot > pontosJogador)
        printf("BOT !!!");
    if (pontosBot < pontosJogador)
        printf("JOGADOR !!!");
    if(pontosBot == pontosJogador)
        printf("Nenhum\nEmpate");
    
    return 0;
}