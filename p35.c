// Scrieti o functie recursiva pentru tiparirea elementelor unui vector in ordine inversa.

#include <stdio.h>

void afisare_vector_invers(int *v, int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d ", v[n - 1]);
    afisare_vector_invers(v, n - 1);
}

int main()
{
    int n;
    printf("Introduceti dimensiunea vectorului: ");
    scanf("%d", &n);

    int v[n];
    printf("Introduceti elementele vectorului: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    printf("\nVectorul in ordine inversa este: ");
    afisare_vector_invers(v, n);

    return 0;
}
