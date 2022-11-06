// Sa se scrie un program C care citeste de la tastatura un sir de caractere, apoi il afiseaza pe ecran.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sir[100];

    printf("Introduceti sirul dorit: ");
    // scanf("%s", sir);
    // cu scanf vom putea afisa doar primul cuvant (daca sirul introdus are cel putin un cuvant)
    fgets(sir, 100, stdin);
    // fgets pentru sirul intreg (daca exista mai multe cuvinte, deci automat caractere de spatiere)
    printf("Sirul introdus este: %s", sir);

    return 0;
}