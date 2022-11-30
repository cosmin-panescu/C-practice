// Sa se scrie un program C in care se aloca dinamic un vector a cărui dimensiune este citita de la tastatura, iar elementele acestuia sunt inițializate cu zero la alocare, se afișează vectorul (verificam faptul ca toate elementele au fost inițializate cu 0), apoi se citesc elementele vectorului de la tastatura, se afișează si se eliberează zona de memorie alocata dinamic.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *p;

    printf("Introduceti dimensiunea vectorului: ");
    scanf("%d", &n);

    p = (int *)calloc(n, sizeof(int));

    if (p == NULL)
    {
        printf("Memorie insuficienta! Programul se va termina!");
        exit(1);
    }

    printf("Inainte de citirea elementelor de la tastatura: \n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, p[i]);
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("Introduceti a[%d] = ", i);
        scanf("%d", &p[i]);
    }

    printf("Dupa citirea elementelor de la tastatura: \n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, p[i]);
    }

    free(p);
    return 0;
}