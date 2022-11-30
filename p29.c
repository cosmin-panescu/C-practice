// Sa se scrie un program C in care:
// - se citește de la tastatura dimensiunile n (nr. linii) si m (nr. coloane) a doua matrice A si B;
// - se aloca dinamic memorie pentru cele doua matrice;
// - se citesc elementele celor doua matrice cu ajutorul unei funcții care primește ca argumente matricea ale cărei elemente trebuie citite (printr-un pointer), numărul de linii si de coloane;
// - se aduna cele doua matrice cu ajutorul unei funcții care primește ca argumente cele doua matrice si dimensiunile lor si aloca dinamic memorie pentru matricea rezultat, întorcând un pointer la aceasta matrice;
// - se afișează rezultatul adunării celor doua matrice cu ajutorul unei funcții care primește care argumente matricea de afișat, numărul de linii si cel de coloane.

#include <stdio.h>
#include <stdlib.h>

void citire_elem(int **matrice, int nr_linii, int nr_coloane)
{
    int i, j;

    for (i = 0; i < nr_linii; i++)
    {
        for (j = 0; j < nr_coloane; j++)
        {
            printf("Matrice[%d][%d] = ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }
}

int **adunare_matrice(int **m1, int **m2, int nr_linii, int nr_coloane)
{
    int i, j;
    int **suma_matrice;

    suma_matrice = (int **)malloc(nr_linii * sizeof(int *));

    if (suma_matrice == NULL)
    {
        printf("Memorie insuficienta! Programul se va termina!\n");
        exit(1);
    }

    for (i = 0; i < nr_linii; i++)
    {
        suma_matrice[i] = (int *)malloc(nr_coloane * sizeof(int));

        if (suma_matrice[i] == NULL)
        {
            printf("Memorie insuficienta! Programul se va termina!\n");
            exit(1);
        }
    }

    for (i = 0; i < nr_linii; i++)
    {
        for (j = 0; j < nr_coloane; j++)
            suma_matrice[i][j] = m1[i][j] + m2[i][j];
    }

    for (i = 0; i < nr_linii; i++)
        free(suma_matrice[i]);

    free(suma_matrice);
    return suma_matrice;
}

void afisare_suma_matrice(int **matrice_suma, int nr_linii, int nr_coloane)
{
    int i, j;

    for (i = 0; i < nr_linii; i++)
    {
        for (j = 0; j < nr_coloane; j++)
        {
            printf("%5d", matrice_suma[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n, m, i;
    int **a, **b, **s;

    printf("Introduceti numarul de linii: ");
    scanf("%d", &n);
    printf("Introduceti numarul de coloane: ");
    scanf("%d", &m);

    printf("\n");

    // Matricea A
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

    // Matricea B
    b = (int **)malloc(n * sizeof(int *));

    if (b == NULL)
    {
        printf("Memorie insuficienta! Programul se va termina!\n");
        exit(1);
    }

    for (i = 0; i < n; i++)
    {
        b[i] = (int *)malloc(m * sizeof(int));
        if (b[i] == NULL)
        {
            printf("Memorie insuficienta! Programul se va termina!\n");
            exit(1);
        }
    }

    citire_elem(a, n, m);
    printf("\n");
    citire_elem(b, n, m);
    printf("\n");
    s = adunare_matrice(a, b, n, m);
    afisare_suma_matrice(s, n, m);

    for (i = 0; i < n; i++)
        free(a[i]);
    for (i = 0; i < n; i++)
        free(b[i]);

    free(a);
    free(b);
    return 0;
}