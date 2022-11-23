// Sa se scrie un program C in care se declara o variabila de tip int inițializată cu o valoare oarecare si o variabila de tip pointer la int. Pointerul se va inițializa cu adresa variabilei declarate anterior. Se va afișa pe ecran valoarea variabilei in mod direct cat si accesata prin intermediul pointerului. Se va afișa de asemenea valoarea pointerului.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    int *p;

    p = &x;

    printf("Valoarea variabilei in mod direct este: x = %d.\n", x);
    printf("Valoarea variabilei accesata prin intermediul pointer-ului este: x = %d.", *p);
    printf("Valoarea pointer-ului este (adresa lui x): p = %p\n.", p);

    return 0;
}