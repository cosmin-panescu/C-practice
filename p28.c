// Sa se scrie un program C in care :
// - se citesc de la tastatura numărul de linii si coloane ale unei matrice de numere întregi;
// - se aloca dinamic o matrice cu dimensiunile citite anterior;
// - se setează valorile elementelor matricei astfel: elementele de pe diagonala principala vor avea valoarea 1, celelalte elemente vor avea valoarea 0;
// - se afișează matricea;
// - se eliberează zona de memorie alocata dinamic pentru matrice;

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **a;
    int n, m, i, j;

    printf("Introduceti numarul de linii: ");
    scanf("%d", &n);

    printf("Introduceti numarul de coloane: ");
    scanf("%d", &m);

    a = (int **)malloc(n * sizeof(int *));

    if (a == NULL)
    {
        printf("Memorie insuficienta! Programul se va termina!\n");
        exit(1);
    }

    for (i = 0; i < n; i++)
    {
        a[i] = (int *)malloc(m * sizeof(int));

        if (a[i] == NULL)
        {
            printf("Memorie insuficienta! Programul se va termina!\n");
            exit(1);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i == j)
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
        free(a[i]);

    free(a);
    return 0;
}