//  Forma ecuatiei de gradul I este a*x + b = 0

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, x;

    printf("Introduceti valoarea pentru a: a = ");
    scanf("%f", &a);
    printf("Introduceti valoarea pentru b: b = ");
    scanf("%f", &b);

    if (a == 0)
    {
        if (b == 0)
        {
            printf("Ecuatia are o infinitate de solutii.\n");
        }
        else
        {
            printf("Ecuatia nu are solutii.\n");
        }
    }
    else
    {
        x = -b / a;
        printf("Solutia ecuatiei este: %f", x);
    }

    return 0;
}