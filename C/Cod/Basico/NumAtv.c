#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, z, a, b, temp, som, sub, mult, div, med, ant, suc, dob, tri, met, hor, val, sal;
    printf("digite um número: ");
    scanf("%f", &x);
    printf("\ndigite outro número: ");
    scanf("%f", &y);
    
    som = x + y;
    printf("\nA soma é igual a: %f", som);
    sub = x - y;
    printf("\nA subtração é igual a: %f", sub);
    mult = x * y;
    printf("\nA multiplicação é igual a: %f", mult);
    div = x / y;
    printf("\nA divisão é igual a: %f", div);

    printf("\nDigite mais um outro número: ");
    scanf("%f", &z);

    ant = z - 1;
    printf("\nO antecessor é igual a: %f", ant);
    suc = z + 1;
    printf("\nO sucessor é igual a: %f", suc);
    dob = z * 2;
    printf("\nO dobro é igual a: %f", dob);
    tri = z * 3;
    printf("\nO triplo é igual a: %f", tri);

    med = (x + y + z) / 3;
    printf("\nA média desses 3 números escolhidos é igual a: %f", med);

    printf("\nDigite seu tempo de trabalho diário: ");
    scanf("%f", &hor);
    printf("\nDigite o valor da sua hora de trabalho: ");
    scanf("%f", &val);

    sal = hor * val * 28;
    printf("\nSeu salário é de: %f", sal);

    printf("\nDigite um número 'a': ");
    scanf("%f", &a);
    printf("\nAgora digite um número 'b': ");
    scanf("%f", &b);

    temp = a;
    a = b;
    b = temp;
    printf("\n'a' é igual a: %f\nE 'b' é igual a: %f", a, temp);
    return 0;
}