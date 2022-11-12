// Realizati programul C care calculează suma S = 1! + 2! + 3! + … + n!

#include <stdio.h>

int main()
{
    long n, i, s, p;
    s = 0;
    p = 1;

    printf("Introduceti n = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        p *= i;
        s += p;
    }

    printf("Suma factorialelor primelor %d numere este: %ld", n, s);

    return 0;
}