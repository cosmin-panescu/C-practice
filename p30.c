// Sa se scrie un program C in care :
// - se citesc de la tastatura dimensiunile (nr. linii si nr. coloane) a doua matrici A si B si se face verificarea acestor dimensiuni astfel incat cele doua matrici sa poata fi inmultite;
// - se aloca dinamic memorie pentru cele doua matrici;
// - se citesc elementele celor doua matrici cu ajutorul unei functii care primeste ca argumente matricea ale carei elemente trebuie citite (printr-un pointer), numarul de linii si de coloane;
// - se inmultesc cele doua matrici cu ajutorul unei functii care primeste ca argumente cele doua matrici si aloca dinamic memorie pentru matricea rezultat, intorcand un pointer la aceasta matrice;
// - se afiseaza rezultatul inmultirii celor doua matrici cu ajutorul unei functii care primeste care argumente matricea de afisat, numarul de linii si cel de coloane;

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
int **inmultire_matrici(int **m1, int **m2, int nr_linii, int nr_coloane, int nr_col_lin)
{
    int i, j, k;
    int **res;
    res = (int **)malloc(nr_linii * sizeof(int *));
    if (res == NULL)
    {
        printf("Memorie insuficienta! Programul se va termina!\n");
        exit(1);
    }
    for (i = 0; i < nr_linii; i++)
    {
        res[i] = (int *)malloc(nr_coloane * sizeof(int));
        if (res[i] == NULL)
        {
            printf("Memorie insuficienta! Programul se va termina!\n");
            exit(1);
        }
    }
    for (i = 0; i < nr_linii; i++)
    {
        for (j = 0; j < nr_coloane; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < nr_col_lin; k++)
            {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    for (i = 0; i < nr_linii; i++)
        free(res[i]);

    free(res);
    return res;
}

void afisare_inm_matrici(int **matr, int nr_linii, int nr_coloane)
{
    int i, j;

    for (i = 0; i < nr_linii; i++)
    {
        for (j = 0; j < nr_coloane; j++)
        {
            printf("%5d", matr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m, n, p, q, i, j, k;
    int **a, **b, **res;

    printf("Introduceti nr. de linii, apoi nr. de coloane pt. matricea A: \n");
    scanf("%d%d", &m, &n);
    printf("Introduceti nr. de linii, apoi nr. de coloane pt. matricea B: \n");
    scanf("%d%d", &p, &q);
    printf("\n");

    while (n != p)
    {
        printf("Cele doua matrici sunt incompatibile pentru inmultire!\n");

        printf("Introduceti nr. de linii, apoi nr. de coloane pt. matricea A: \n");
        scanf("%d%d", &m, &n);
        printf("Introduceti nr. de linii, apoi nr. de coloane pt. matricea B: \n");
        scanf("%d%d", &p, &q);
    }

    // Matricea A
    a = (int **)malloc(m * sizeof(int *));

    if (a == NULL)
    {
        printf("Memorie insuficienta! Programul se va termina!\n");
        exit(1);
    }

    for (i = 0; i < m; i++)
    {
        a[i] = (int *)malloc(n * sizeof(int));
        if (a[i] == NULL)
        {
            printf("Memorie insuficienta! Programul se va termina!\n");
            exit(1);
        }
    }

    // Matricea B
    b = (int **)malloc(p * sizeof(int *));

    if (b == NULL)
    {
        printf("Memorie insuficienta! Programul se va termina!\n");
        exit(1);
    }

    for (i = 0; i < p; i++)
    {
        b[i] = (int *)malloc(q * sizeof(int));
        if (b[i] == NULL)
        {
            printf("Memorie insuficienta! Programul se va termina!\n");
            exit(1);
        }
    }

    citire_elem(a, m, n);
    printf("\n");
    citire_elem(b, p, q);
    printf("\n");
    res = inmultire_matrici(a, b, m, q, p);
    afisare_inm_matrici(res, m, q);

    for (i = 0; i < m; i++)
        free(a[i]);
    for (i = 0; i < p; i++)
        free(b[i]);

    free(a);
    free(b);

    return 0;
}