// Scrieți un program C in care se declara o matrice cu 10 linii si 5 coloane ale cărei elemente sunt numere întregi. Programul va defini următoarele funcții:
// - Cate o funcție pentru a citi de la tastatura numărul efectiv de linii si coloane cu validarea valorilor introduse (numărul efectiv de linii sa nu depășească 10 iar numărul efectiv de coloane sa nu depășească 5);
// - O funcție pentru citirea elementelor matricei;
// - O funcție pentru calculul sumei elementelor matricei;
// - O funcție pentru calculul sumei elementelor pozitive;
// - O funcție pentru calculul sumei elementelor de pe linia "i";
// Funcțiile vor primi ca argumente matricea si dimensiunile ei iar in cazul calcului sumei elementelor de pe linia „i” se va transmite funcției si numărul liniei.

#include <stdio.h>
#include <stdlib.h>

// introducere numar de linii
int citire_nr_linii()
{
    int nr;

    printf("Introduceti numarul de linii al matricei: ");
    scanf("%d", &nr);

    if (nr > 10)
    {
        printf("Ati introdus o valoare prea mare!\n");
        printf("Introduceti din nou numarul de linii al matricei: ");
        scanf("%d", &nr);
    }
    return nr;
}

// introducere numar de coloane
int citire_nr_coloane()
{
    int nr;

    printf("Introduceti numarul de coloane al matricei: ");
    scanf("%d", &nr);

    if (nr > 5)
    {
        printf("Ati introdus o valoare prea mare!\n");
        printf("Introduceti din nou numarul de coloane al matricei: ");
        scanf("%d", &nr);
    }
    return nr;
}

// citirea elementelor matricei
void citire_elemente(int a[10][5], int n, int m)
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

// suma elementelor matricei
int suma_elemente(int a[10][5], int n, int m)
{
    int s = 0;
    int i, j;

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            s += a[i][j];

    return s;
}

// suma elementelor matricei
int suma_elemente_poz(int a[10][5], int n, int m)
{
    int s = 0;
    int i, j;

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (a[i][j] >= 0)
                s += a[i][j];

    return s;
}

// suma elemetelor de pe o anumita linie
int suma_linie(int a[10][5], int m, int linie)
{
    int s = 0;
    int j;

    for (j = 0; j < m; j++)
        s += a[linie][j];

    return s;
}

// valoarea media a elementelor matricei
float medie_elemente(int a[10][5], int n, int m)
{
    float med;

    med = (float)suma_elemente(a, n, m) / (m * n);

    return med;
}

// interschimbarea a doua linii
void interschimbare_linii(int a[10][5], int n, int m, int linia1, int linia2)
{
    int aux, j, i;

    for (j = 0; j < m; j++)
    {
        aux = a[linia1][j];
        a[linia1][j] = a[linia2][j];
        a[linia2][j] = aux;
    }

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= m; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}

// interschimbarea a doua coloane
void interschimbare_coloane(int a[10][5], int n, int m, int coloana1, int coloana2)
{
    int aux, j, i;

    for (i = 0; i < n; i++)
    {
        aux = a[i][coloana1];
        a[i][coloana1] = a[i][coloana2];
        a[i][coloana2] = aux;
    }

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= m; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}

// suma elementelor de pe o anumita coloana
int suma_coloana(int a[10][5], int n, int coloana)
{
    int s = 0;
    int i;
    for (i = 0; i < n; i++)
        s += a[i][coloana];

    return s;
}

// elementul maxim de pe fiecare linie a matricei
void max_linie(int a[10][5], int n, int m)
{
    int max, i, j;

    for (i = 1; i <= n; i++)
    {
        max = -999;

        for (j = 1; j <= m; j++)
            if (a[i][j] > max)
                max = a[i][j];

        printf("Valoarea maxima de pe linia %d este: %d\n", i, max);
    }

    printf("\n");
}

// elementul minim de pe fiecare coloana a matricei
void min_coloana(int a[10][5], int n, int m)
{
    int min, i, j;

    for (j = 1; j <= m; j++)
    {
        min = 999;

        for (i = 1; i <= n; i++)
            if (a[i][j] < min)
                min = a[i][j];

        printf("Valoarea minima de pe coloana %d este: %d\n", j, min);
    }

    printf("\n");
}

int main()
{
    int a[10][5], n, m, l, c, l1, l2, c1, c2, i, j;

    n = citire_nr_linii();
    m = citire_nr_coloane();

    citire_elemente(a, n, m);

    printf("Suma elementelor matricei este: %d\n", suma_elemente(a, n, m));
    printf("Suma elementelor pozitive ale matricei este: %d\n", suma_elemente_poz(a, n, m));

    printf("Introduceti numarul liniei a carei suma doriti sa fie calculata: ");
    scanf("%d", &l);
    printf("Suma elementelor de pe linia %d este: %d\n", l, suma_linie(a, m, l - 1)); // l-1 deoarece indexarea incepe de la 0

    // tema
    printf("Valoarea medie a elementelor matricei este: %f\n", medie_elemente(a, n, m));

    printf("Introduceti indexul liniilor pe care doriti sa le interschimbati: ");
    scanf("%d %d", &l1, &l2);
    interschimbare_linii(a, n, m, l1 - 1, l2 - 1);

    printf("Introduceti indexul coloanelor pe care doriti sa le interschimbati: ");
    scanf("%d %d", &c1, &c2);
    interschimbare_coloane(a, n, m, c1 - 1, c2 - 1);

    printf("Introduceti indexul coloanei a carei elemente doriti sa le insuamati: ");
    scanf("%d", &c);
    printf("Suma elementelor de pe coloana %d a matricei este: %d\n", c, suma_coloana(a, n, c - 1));

    max_linie(a, n, m);
    min_coloana(a, n, m);

    return 0;
}