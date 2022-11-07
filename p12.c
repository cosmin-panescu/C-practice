// Realizați programul C care calculează valoarea expresiei S=1-2+3-4+....+n, folosind 3 funcții: una va folosi instrucțiunea for, a doua while iar a treia do-while.

#include <stdio.h>

// FOR
int suma1(int n)
{
    int s = 0, i, semn = 1;

    for (i = 1; i <= n; i++)
    {
        s += semn * i;
        semn = -semn;
    }

    return s;
}

// WHILE
int suma2(int n)
{
    int s = 0, i = 1, semn = 1;

    while (i <= n)
    {
        s += semn * i;
        semn = -semn;
        i++;
    }

    return s;
}

// DO WHILE
int suma3(int n)
{
    int s = 0, i = 1, semn = 1;

    do
    {
        s += semn * i;
        semn = -semn;
        i++;
    } while (i <= n);

    return s;
}

int main()
{
    int n;

    printf("Introduceti n:");
    scanf("%d", &n);

    printf("\nSuma calculata cu FOR are valoarea: %d", suma1(n));
    printf("\nSuma calculata cu WHILE are valoarea: %d", suma2(n));
    printf("\nSuma calculata cu DO WHILE are valoarea: %d", suma3(n));

    return 0;
}