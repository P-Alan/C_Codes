#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int i, vogal;

    vogal = rand() % 4;

    if(vogal == 0)
        printf("a");
    if(vogal == 1)
        printf("e");
    if(vogal == 2)
        printf("i");
    if(vogal == 3)
        printf("o");
    if(vogal == 4)
        printf("u");

    return 0;
}