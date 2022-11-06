// Sa se scrie un program C care calculeza suma a doua numere intregi, astfel : se citesc numerele de la tastatura, se calculeaza suma lor si se afiseaza rezultatul.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Introduceti primul numar: a = ");
    scanf("%d", &a);
    printf("Introduceti al doilea numar: b = ");
    scanf("%d", &b);

    c = a + b;
    printf("Suma numerelor %d si %d este: %d", a, b, c);

    return 0;
}