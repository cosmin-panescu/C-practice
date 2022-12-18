// Sa se scrie un program care citeste mai multe linii de text si afiseaza numarul liniei si textul propriu-zis.

#include <stdio.h>

int main()
{
    char linii[128];
    int nl = 0;

    while (gets(linii) != NULL)
    {
        ++nl;
        printf("%d: %s \n", nl, linii);
    }

    return 0;
}