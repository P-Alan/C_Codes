#include <stdlib.h>
#include <stdio.h>

int main()
{
    float nota1, nota2;
    

    printf("Qual a primeira nota: ");
    scanf("%f", &nota1);

    printf("Qual a segunda nota: ");
    scanf("%f", &nota2);
    
    float media = (nota1 + nota2)/2;

    if(media >= 7){
        printf("APROVADO!!!!!");
    }

    if(media < 4){
        printf("REPROVADO!!!!");
    }

    if(4 <= media && media < 7){
        printf("RECUPERAÇÃO!!!");
    }

    return 0;
}