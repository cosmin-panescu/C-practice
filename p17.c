// Sa se scrie un program C care calculeaza suma a doi vectori.

#include <stdio.h>
int main()
{
    int a[10], b[10], c[10], n, i;

    printf("Introduceti lungimea vectorilor: ");
    scanf("%d", &n);

    printf("Elementele primului vector sunt: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elementele celui de-al 2-lea vector sunt: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }

    printf("Vectorul suma este: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}