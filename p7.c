// Sa se scrie un program C care care calculeaza media aritmetica a doua numere intregi citite de la tastatura cu ajutorul unei functii definite de utilizator.

#include <stdio.h>
#include <stdlib.h>

float media(int x, int y)
{
    float mediaAritmetica;
    mediaAritmetica = (x + y) / 2.0; // rezultatul va fi de tip float
    return mediaAritmetica;
}

int main()
{
    int a, b;
    float m;

    printf("Introduceti primul numar: a = ");
    scanf("%d", &a);
    printf("Introduceti al doilea numar: b = ");
    scanf("%d", &b);

    m = media(a, b);
    printf("Media numerelor %d si %d este: %f", a, b, m);

    return 0;
}