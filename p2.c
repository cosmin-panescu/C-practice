// Sa se scrie un program C care afiseaza textul "Hello world!", astfel incat afisarea sa se realizeze prin intermediul unei functii care primeste textul de afisat printr-un parametru.

#include <stdio.h>
#include <stdlib.h>

void afisare(char a[])
{
    printf("%s", a);
}

int main()
{
    afisare("Hello world!");
    return 0;
}