// Realizați programul C care calculează suma primelor n numere naturale.

#include <stdio.h>

int main()
{
    unsigned int i, n, s = 0; // unsigned pentru ca lucram doar cu valori pozitive

    printf("Introduceti n: ");
    scanf("%u", &n);

    for (i = 1; i <= n; i++)
    {
        s += i; // <=> s=s+i
    }

    printf("Suma primelor %u numere naturale este: %u\n", n, s);

    return 0;
}