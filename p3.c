#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sir[100];
    printf("Introduceti sirul dorit: ");
    // scanf("%s", sir);
    fgets(sir, 100, stdin);
    printf("Sirul introdus este: %s", sir);
    return 0;
}