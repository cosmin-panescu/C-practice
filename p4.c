// Sa se scrie un program C care calculeaza suma a doua numere intregi, astfel : se dau doua valori direct in program memorate in doua variabile, se calculeaza suma lor si se afiseaza.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    a = 6;
    b = 8;

    c = a + b;
    printf("Suma numerelor %d si %d este: %d", a, b, c);

    return 0;
}