// Sa se scrie un program care afişează atomii lexicali dintr-o linie de text citita de la tastatura

#include <stdio.h>
#include <string.h>

int main()
{
    char linie[128], *cuv;
    char *sep = ".,;\t\n "; // sir de caractere separator

    gets(linie);

    cuv = strtok(linie, sep); // primul cuvant din linie

    while (cuv != NULL)
    {
        puts(cuv);
        cuv = strtok(0, sep);
    }

    return 0;
}
