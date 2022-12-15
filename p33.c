// Scrieti o functie recursiva care calculeaza valoarea minima / maxima a elementelor unui vector de dimensiune n

#include <stdio.h>

void minmax(int arr[], int n, int *min, int *max)
{
    if (n == 1)
    {
        *min = arr[0];
        *max = arr[0];
        return;
    }

    int mn, mx;
    minmax(arr + 1, n - 1, &mn, &mx);

    if (arr[0] < mn)
        *min = arr[0];
    else
        *min = mn;

    if (arr[0] > mx)
        *max = arr[0];
    else
        *max = mx;
}

int main()
{
    int n;
    printf("Introduceti lungimea vectorului: ");
    scanf("%d", &n);

    int arr[n];
    printf("Introduceti elementele vectorului: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int min, max;
    minmax(arr, n, &min, &max);

    printf("\n");
    printf("Valoarea minima a vectorului este: %d\n", min);
    printf("Valoarea maxima a vectorului este: %d\n", max);

    return 0;
}