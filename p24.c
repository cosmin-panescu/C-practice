// Sa se scrie un program C in care se declara doua variabile a si b de tip int inițializate cu valori citite de la tastatura si trei variabile de tip pointer la int cu ajutorul cărora se vor interschimba adresele lui a si b. Este posibil acest lucru? Se vor afișa pe ecran adresele variabilelor a si b precum si valorile lor.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    int *x, *y, *z;

    x = &a;
    y = &b;

    printf("Introduceti valoarea pentru a: ");
    scanf("%d", x);
    printf("Introduceti valoarea pentru b: ");
    scanf("%d", y);
    printf("\n");

    printf("Inainte de interschimbare:\n");
    printf("-> (In mod direct) a = %d si b = %d\n", a, b);
    printf("-> (Prin intermediul pointerilor) a = %d si b = %d\n", *x, *y);
    printf("-> (In mod direct) Adresa lui a este: %p, iar adresa lui b este: %p\n", &a, &b);
    printf("-> (Prin intermediul pointerilor) Adresa lui a este: %p, iar adresa lui b este: %p\n", x, y);
    printf("\n");

    z = x;
    x = y;
    y = z;

    printf("Dupa interschimbare:\n");
    printf("-> (In mod direct) a = %d si b = %d\n", a, b);
    printf("-> (Prin intermediul pointerilor) a = %d si b = %d\n", *x, *y);
    printf("-> (In mod direct) Adresa lui a este: %p, iar adresa lui b este: %p\n", &a, &b);
    printf("-> (Prin intermediul pointerilor) Adresa lui a este: %p, iar adresa lui b este: %p\n", x, y);

    return 0;
}