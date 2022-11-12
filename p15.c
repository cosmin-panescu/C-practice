// Sa se scrie un program C care rezolva ecuatia de gradul II. Coeficientii ecuatiei se citesc de la tastatura. Luati in considerare toate valorile posibile ale acestor coeficienti.

// Forma ecuatiei de gradul II este a*x*x + b*x + c = 0

#include <stdio.h>
#include <math.h> // pentru functia "sqrt"

void main()
{
    int a, b, c, delta;
    float x1, x2; // radacinile

    printf("Introduceti valoarea pentru a = ");
    scanf("%d", &a);
    printf("Introduceti valoarea pentru b = ");
    scanf("%d", &b);
    printf("Introduceti valoarea pentru c = ");
    scanf("%d", &c);

    delta = b * b - 4 * a * c;

    if (delta == 0)
    {
        printf("Ambele radacini ale ecuatiei sunt egale.\n");
        x1 = -b / 2.0 * a; // 2.0 pentru rezultatul de tip float
        x2 = x1;           // deoarece delta este 0
        printf("Prima radacina a ecuatiei este: %.2f\n", x1);
        printf("A doua radacina a ecuatiei este: %.2f\n", x2);
    }
    else if (delta > 0)
    {
        printf("Ambele radacini ale ecuatiei sunt reale si diferite.\n");
        x1 = (-b + sqrt(delta)) / (2.0 * a);
        x2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("Prima radacina a ecuatiei este: %.2f\n", x1);
        printf("A doua radacina a ecuatiei este: %.2f\n", x2);
    }
    else
    {
        printf("Ambele radacini ale ecuatiei sunt imaginare (numere complexe).\n");
    }
}