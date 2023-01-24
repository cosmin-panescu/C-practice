// Sa se scrie un program pentru numararea cuvintelor si liniilor dintr-un fisier text. Cuvintele sunt separate prin spatii albe.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fisier;
    char locatie[150], caracter;
    int cuvinte = 0, linii = 0;

    printf("Introduceti destinatia fisierului: ");
    scanf("%s", locatie);

    fisier = fopen(locatie, "r");

    if (fisier == NULL)
    {
        printf("\nFisierul nu a putut fi deschis!\n");
        printf("Incercati din nou!\n");

        exit(EXIT_FAILURE);
    }

    while ((caracter = fgetc(fisier)) != EOF)
    {
        if (caracter == '\n' || caracter == '\0')
            linii++;

        if (caracter == ' ' || caracter == '\t' || caracter == '\n' || caracter == '\0')
            cuvinte++;
    }

    printf("\n");
    printf("Cuvinte = %d\n", cuvinte);
    printf("Linii = %d\n", linii);

    fclose(fisier);
    return 0;
}