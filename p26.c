// Sa se scrie un program C in care se declara un vector de 5 valori int inițializat la declarare si un pointer la acest vector. Folosind aritmetica pointerilor, sa se:
// - parcurgă si afișeze toate elementele vectorului
// - afișeze elementul de pe prima si a patra poziție a vectorului

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[] = {1, 2, 3, 4, 5}, *p, i;

    p = x;

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *p);
        p++;
    }

    printf("\n");

    p = p - 5;
    printf("Primul element al vectorului este: %d\n", *p);

    p = p + 3;
    printf("Al patrulea element al vectorului este: %d\n", *p);

    return 0;
}