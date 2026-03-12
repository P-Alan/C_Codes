#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int id;
    printf ("Que ano você nasceu?: \n");
    scanf ("%d", &id);
    printf ("você fez/fará %d anos em 2026.", 2026-id);
    return 0;
}