// Realizați programul C care citește numere reale a, b, c si decide daca cele 3 numere pot reprezenta lungimile laturilor unui triunghi folosind instrucțiunea if. Scrieti acelasi programul folosind instructiunea ?.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;

    printf("Introduceti lungimea primei laturi: a =  ");
    scanf("%f", &a);
    printf("Introduceti lungimea laturii 2: b =  ");
    scanf("%f", &b);
    printf("Introduceti lungimea laturii 3: c =  ");
    scanf("%f", &c);

    if (a >= 0 && b >= 0 && c >= 0 && a < b + c && b < a + c && c < a + b)
    {
        printf("%4.2f, %4.2f si %4.2f formeaza un triunghi.", a, b, c);
    }
    else
    {
        printf("%4.2f, %4.2f si %4.2f nu formeaza un triunghi.", a, b, c);
    }

    // Varianta cu "?"
    // (a >= 0 && b >= 0 && c >= 0 && a < b + c && b < a + c && c < a + b) ?
    //     printf("%4.2f, %4.2f si %4.2f formeaza un triunghi.", a, b, c) :
    //     printf("%4.2f, %4.2f si %4.2f nu formeaza un triunghi.", a, b, c);

    return 0;
}