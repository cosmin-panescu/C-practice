// Scrieți un program C in care se declara o matrice cu 5 linii si 4 coloane ale cărei elemente sunt numere întregi. Programul va defini doua funcții care primesc ca argumente matricea si dimensiunile ei :
// - O funcție care citește valorile elementelor matricei de la tastatura;
// - O funcție care afișează elemente matricei pe ecran, cate o linie a matricei pe o linie de ecran.
// In funcția main()a programului se vor apela cele doua funcții de citire si afișare pe ecran.

#include <stdio.h>
#include <stdlib.h>

void citire(int a[][4], int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void afisare(int a[][4], int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }
}

int main()
{
    int a[5][4];
    citire(a, 5, 4);
    afisare(a, 5, 4);

    return 0;
}