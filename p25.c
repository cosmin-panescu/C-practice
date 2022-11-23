// Sa se scrie un program C in care se citesc de la tastatura valorile a doua variabile de tip int iar apoi cu ajutorul unei funcții care primește ca argumente adresele acestor variabile se interschimba valorile lor. Se afișează pe ecran valorile celor doua variabile atât înainte cat si după interschimbare.

#include <stdio.h>
#include <stdlib.h>

void interschimbare(int *p1, int *p2)
{
    int aux;
    aux = *p2;
    *p2 = *p1;
    *p1 = aux;
}

int main()
{
    int x, y;

    printf("Introduceti valoarea pentru x: ");
    scanf("%d", &x);
    printf("Introduceti valoarea pentru y: ");
    scanf("%d", &y);
    printf("\n");

    printf("Inainte de interschimbare:\n");
    printf("x = %d si y = %d\n", x, y);

    interschimbare(&x, &y);

    printf("Dupa interschimbare:\n");
    printf("x = %d si y = %d\n", x, y);

    return 0;
}