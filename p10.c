// Realizați programul C care citește valoarea variabilei reale x si afișează valoarea funcției f(x) calculata astfel:

//       | 3*x*x+7*x-10 x<0
// f(x)= | 2 x=0
//       | 4*x*x x>0

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Introduceti valoarea pentru x: ");
    scanf("%d", &x);

    if (x == 0)
    {
        printf("F(x) = 2");
    }
    else if (x < 0)
    {
        printf("F(x) = %d", 3 * x * x + 7 * x - 10);
    }
    else
    {
        printf("F(x) = %d", 4 * x * x);
    }

    return 0;
}
