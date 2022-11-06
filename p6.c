// Sa se scrie un program C care calculeaza suma a doua numere intregi, astfel : se citesc numerele de la tastatura, valorile citite se transmit unei functii care calculeaza suma lor si returneaza rezultatul.

#include <stdio.h>
#include <stdlib.h>

int suma(int x, int y)
{
    int s;
    s = x + y;
    return s;
}

int main()
{
    int a, b, c;

    printf("Introduceti primul numar: a = ");
    scanf("%d", &a);
    printf("Introduceti al doilea numar: b = ");
    scanf("%d", &b);

    c = suma(a, b);
    printf("Suma numerelor %d si %d este: %d", a, b, c);

    return 0;
}