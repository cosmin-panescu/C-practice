// Scrieti o functie recursiva care calculeaza cmmdc a doua numere.

#include <stdio.h>

int cmmdc(int a, int b)
{
    if (b == 0)
        return a;
    return cmmdc(b, a % b);
}

int main()
{
    int a, b;

    printf("Introduceti primul numar: a = ");
    scanf("%d", &a);

    printf("Introduceti al doilea numar: b = ");
    scanf("%d", &b);

    printf("Cel mai mare divizor comun (cmmdc) al numerelor %d si %d este %d\n", a, b, cmmdc(a, b));

    return 0;
}
