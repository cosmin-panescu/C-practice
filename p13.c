// Sa se scrie un program C in care se declara un vector cu maxim 20 de elemente de tip intreg. Numarul efectiv de elemente ale vectorul va fi preluat de la tastatura cu ajutorul unei functii care realizeaza si validarea acestuia: valorile admisibile sunt cuprinse in intervalul inchis[1, 20]. De asemenea se vor scrie alte doua functii, una pentru citirea elementelor vectorului si una pentru afisarea lor pe ecran. In programul principal se vor apela cele 3 functii.

#include <stdio.h>
#include <stdlib.h>

// citirea nr de elemente ale vectorului
int citeste_nr_elem()
{
    int n;
    printf("Introduceti numarul de elemente: n = ");
    scanf("%d", &n);

    // doar valorile curpinse in intervalul [1, 20]
    while (n < 1 || n > 20)
    {
        printf("Valoare incorecta!\n");
        printf("Introduceti numarul de elemente: n = ");
        scanf("%d", &n);
    }
    return n;
}

// citirea elementelor vectorului
void citeste_elem(int nr, int *a)
{
    int i;
    for (i = 0; i < nr; i++)
    {
        printf("Introduceti elementul a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

// afisarea elementelor vectorului
void afiseaza_elem(int nr, int *a)
{
    int i;
    for (i = 0; i < nr; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
}

int main()
{
    int a[20];
    int nr_elem;

    nr_elem = citeste_nr_elem();
    citeste_elem(nr_elem, a);
    afiseaza_elem(nr_elem, a);

    return 0;
}