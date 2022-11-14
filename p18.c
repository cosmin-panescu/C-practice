// Scrieți un program C in care se declara o matrice cu 5 linii si 4 coloane ale cărei elemente sunt numere întregi. Matricea va fi inițializată la declararea apoi va fi afișată pe ecran, cate o linie a matricei pe o linie de ecran.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 0, 1, 2},
        {3, 4, 5, 6},
        {7, 8, 9, 0}};
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}