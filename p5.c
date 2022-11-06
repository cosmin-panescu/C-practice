#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Introduceti primul numar: a = ");
    scanf("%d", &a);
    printf("Introduceti al doilea numar: b = ");
    scanf("%d", &b);
    c = a + b;
    printf("Suma numerelor %d si %d este: %d", a, b, c);
    return 0;
}