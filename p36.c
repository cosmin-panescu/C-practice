// Sa se scrie variante de implementare a funcţiilor de bibliotecă strlen, strcmp, strcpy şi strcat.

#include <stdio.h>
#include <stdlib.h>

int strcmp(char *s1, char *s2)
{
    int i;
    for (i = 0; s1[i] || s2[i]; i++)
    {
        if (s1[i] < s2[i])
        {
            return -1;
        }
        else if (s1[i] > s2[i])
        {
            return 1;
        }
    }

    return 0;
}

int strlen(char *s)
{
    int lg = 0;
    while (s[lg] != '\0')
        lg++;
    return lg;
}

char *strcpy(char *d, char *s)
{
    int i = 0;
    while (s[i])
    {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0'; // d[i] = 0
    return d;
}

int main()
{
    char s1[80];
    char s2[80];
    int cmp;

    gets(s1);
    gets(s2);

    // STRCMP
    cmp = strcmp(s1, s2);
    if (cmp == 0)
        printf("\n Cele doua siruri sunt identice");
    else if (cmp > 0)
        printf("\n Al doilea sir este inaintea primului, dpdv lexicografic");
    else
        printf("\n Primul sir este inaintea celui de-al doilea, dpdv lexicografic");

    // STRLEN
    printf("\n Lungimea primului sir este: %d", strlen(s1));

    // STRCPY
    char *copy = (char *)malloc(strlen(s1));
    copy = strcpy(copy, s1);
    printf("\n Copia primului sir este: ");
    puts(copy);

    return 0;
}