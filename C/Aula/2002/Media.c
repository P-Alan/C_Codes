#include <stdlib.h>
#include <stdio.h>

int main() 
{
    float alt1, alt2;
    printf ("Digite sua altura em metros: ");
    scanf ("%f", &alt1);
    if (alt1 < 1.70) {
        printf ("Anão\n");
    }
    printf ("Digite uma segunda altura qualquer em metros: ");
    scanf ("%f", &alt2);

    printf ("A média dessas alturas é igual a: %.2f", (alt1 + alt2)/2);
    return 0;
}