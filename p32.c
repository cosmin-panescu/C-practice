// Scrieti o functie recursiva care afiseaza un numar intreg in baza 2
#include <stdio.h>

void afisare_baza2(int n)
{
    if (n == 0)
    {
        return;
    }
    afisare_baza2(n / 2);
    printf("%d", n % 2);
}

int main()
{
    int a;

    printf("Introduceti numarul intreg pe care doriti sa il afisati in baza 2: ");
    scanf("%d", &a);

    printf("Numarul intreg %d in baza 2 este: ", a);
    afisare_baza2(a);

    return 0;
}