// Sa se scrie un program C in care se declara un vector cu maxim 20 de elemente de tip intreg. Numarul efectiv de elemente ale vectorul va fi preluat de la tastatura cu ajutorul unei functii care realizeaza si validarea acestuia: valorile admisibile sunt cuprinse in intervalul inchis [1, 20]. De asemenea se vor scrie functii pentru:
// - citirea elementelor vectorului de numere întregi ;
// - afisarea elementelor vectorului de numere întregi ;
// - calculul sumei elementelor vectorului;
// - calculul produsului elementelor vectorului;
// - calculul mediei aritmetice a elementelor vectorului;
// - calculul numarului de elementele negative din vector;
// - calculul numarului de elementele pozitive din vector;
// - calculul numarului de elementele egale cu zero din vector;
// - calculul valorii minime dintre elementele vectorului;
// - calculul valorii maxime dintre elementele vectorului;
// - calculul sumei elementelor pozitive ale vectorului;
// - calculul sumei elementelor negative ale vectorului;
// - cautarea unei anumite valori în vector cu returnarea pozitiei pe care se gaseste; în cazul în care valoarea se afla de mai multe ori pe pozitii diferite, vom avea ca rezultat prima pozitie pe care acesta valoare a fost gasita ; daca valoarea cautata nu este gasita in vector functia va avea ca rezultat -1;

#include <stdio.h>
#include <stdlib.h>

// preluarea numarului de elemente ale vectorului
int citeste_nr_elem()
{
    int n;
    printf("Introduceti numarul de elemente: n = ");
    scanf("%d", &n);

    while (n < 1 || n > 20)
    {
        printf("Valoarea este incorecta!\n");
        printf("Introduceti numarul de elemente: n = ");
        scanf("%d", &n);
    }

    return n;
}

// citirea elementelor vectorului
void citire(int nr, int *a)
{
    int i;
    for (i = 0; i < nr; i++)
    {
        printf("Introduceti a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

// afisarea elementelor vectorului
void afisare(int nr, int *a)
{
    int i;
    for (i = 0; i < nr; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}

// suma elementelor vectorului
int suma_elem(int nr, int *a)
{
    int i;
    int s = 0;

    for (i = 0; i < nr; i++)
    {
        s += a[i];
    }
    return s;
}

// produsul elementelor vectorului
int produs_elem(int nr, int *a)
{
    int i;
    int p = 1;

    for (i = 0; i < nr; i++)
    {
        p *= a[i];
    }
    return p;
}

// media aritmentica a elementelor vectorului
float media_elem(int nr, int *a)
{
    float m;

    m = (float)suma_elem(nr, a) / nr;
    return m;
}

// numarul elementelor negativa
int nr_negative(int nr, int *a)
{
    int i;
    int neg = 0;
    for (i = 0; i < nr; i++)
    {
        if (a[i] < 0)
        {
            neg++;
        }
    }
    return neg;
}

// numarul elementelor pozitive
int nr_pozitive(int nr, int *a)
{
    int i;
    int poz = 0;
    for (i = 0; i < nr; i++)
    {
        if (a[i] > 0)
        {
            poz = poz + 1;
        }
    }
    return poz;
}

// numarul elementelor egale cu 0
int nr_zero(int nr, int *a)
{
    int i;
    int zero = 0;
    for (i = 0; i < nr; i++)
    {
        if (a[i] == 0)
        {
            zero++;
        }
    }
    return zero;
}

// valoarea minima a vectorului
int min(int nr, int *a)
{
    int i;
    int min = a[0];

    for (i = 1; i < nr; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

// valoarea maxima a vectorului
int max(int nr, int *a)
{
    int i;
    int max = a[0];

    for (i = 1; i < nr; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

// suma elementelor negative
int suma_elem_negative(int nr, int *a)
{
    int i;
    int sn = 0;

    for (i = 0; i < nr; i++)
    {
        if (a[i] < 0)
        {
            sn += a[i];
        }
    }
    return sn;
}

// suma elementelor pozitive
int suma_elem_pozitive(int nr, int *a)
{
    int i;
    int sp = 0;

    for (i = 0; i < nr; i++)
    {
        if (a[i] > 0)
        {
            sp += a[i];
        }
    }
    return sp;
}

// cautare valoare
int cautare_valoare(int nr, int *a, int val)
{
    int i;
    for (i = 0; i < nr; i++)
    {
        if (a[i] == val)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int a[20];
    int nr_elem, sum, prod, nr_neg, nr_poz, nr_zr, val_min, val_max, s_poz, s_neg, valoare, pozitie;
    float med;

    nr_elem = citeste_nr_elem();
    citire(nr_elem, a);
    afisare(nr_elem, a);

    sum = suma_elem(nr_elem, a);
    printf("Suma elementelor vectorului este: %d\n", sum);

    prod = produs_elem(nr_elem, a);
    printf("Produsul elementelor vectorului este: %d\n", prod);

    med = media_elem(nr_elem, a);
    printf("Media aritmetica a elementelor vectorului este: %f\n", med);

    nr_neg = nr_negative(nr_elem, a);
    printf("Numarul elementelor negative din vector este: %d\n", nr_neg);

    nr_poz = nr_pozitive(nr_elem, a);
    printf("Numarul elementelor pozitive din vector este: %d\n", nr_poz);

    nr_zr = nr_zero(nr_elem, a);
    printf("Numarul elementelor egale cu 0 din vector este: %d\n", nr_zr);

    val_min = min(nr_elem, a);
    printf("Valoarea minima a vectorului este: %d\n", val_min);

    val_max = max(nr_elem, a);
    printf("Valoarea maxima a vectorului este: %d\n", val_max);

    s_neg = suma_elem_negative(nr_elem, a);
    printf("Suma elementelor negative din vector este: %d\n", s_neg);

    s_poz = suma_elem_pozitive(nr_elem, a);
    printf("Suma elementelor pozitive din vector este: %d\n", s_poz);

    printf("Introdu valoarea pe care doresti sa o cauti in vector: ");
    scanf("%d", &valoare);
    pozitie = cautare_valoare(nr_elem, a, valoare);
    if (pozitie > 0)
    {
        printf("Valoarea %d se gaseste pe pozitia: %d", valoare, pozitie);
    }
    else
    {
        printf("Valoarea %d nu se gaseste in vector.", valoare);
    }

    return 0;
}