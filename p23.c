// Sa se scrie un program C in care se declara doua variabile a si b de tip int inițializate cu valori oarecare si o variabila de tip pointer la int. Pointerul se va inițializa cu adresa variabilei b, apoi la adresa punctata de pointer se va scrie valoarea variabilei a. Se vor afișa valorile variabilelor a si b atât direct cat si prin intermediul pointerilor.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    int b = 10;
    int *p;

    p = &b;
    *p = a;

    printf("Valorile variabilelor a si b, in mod direct, sunt: a = %d si b = %d.\n", a, b);
    printf("Valorile variabilelor a si b, prin intermediul pointerilor, sunt: a = %d si b = %d.\n", *(&a), *p);

    return 0;
}