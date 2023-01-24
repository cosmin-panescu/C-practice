// Declarati o structura « angajat » cu urmatoarele campuri:
// -cod angajat;
// -nume;
// -prenume;
// -data_angajarii:
//      -an
//      -luna
//      -zi
// -salariu incadrare;
// Numele si prenumele angajatilor au maxim 50 de caractere.
// Declarati un vector de structuri de tip « angajat » si alocati dinamic memorie pentru acest vector.
// Numarul de angajati va fi citit de la tastatura.
// -Scrieti o functie care primeste ca argumente adresa de inceput a unui vector de structuri « angajat » si dimensiunea acestui vector si citeste de la tastatura valori pentru fiecare camp al acestor structuri.
// -Scrieti o functie care primeste ca argumente adresa de inceput a unui vector de structuri « angajat » si dimensiunea acestui vector si calculeaza salariul mediu.
// -Scrieti o functie care primeste ca argumente adresa de inceput a unui vector de structuri « angajat » si dimensiunea acestui vector si afiseaza toate datele despre angajati.
// Varianta : verificati faptul ca data angajarii este valida.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM_MAX 50

struct angajat
{
    int cod_angajat;
    char *nume;
    char *prenume;
    structgit
    {
        int an;
        int luna;
        int zi;
    } data_angajarii;
    float sal_incadrare;
};

void citeste(struct angajat *p, int dim)
{
    int i;

    for (i = 0; i < dim; i++)
    {
        printf("\nIntroduceti cod angajat:");
        scanf("%d", &p[i].cod_angajat);
        printf("\nIntroduceti nume angajat:");
        scanf("%49s", p[i].nume);
        printf("\nIntroduceti prenume angajat:");
        scanf("%49s", p[i].prenume);
        printf("\nIntroduceti data angajarii:");
        printf("\nAn:");
        scanf("%d", &p[i].data_angajarii.an);
        printf("\nLuna:");
        scanf("%d", &p[i].data_angajarii.luna);
        printf("\nZi:");
        scanf("%d", &p[i].data_angajarii.zi);
        printf("\nIntroduceti salariul:");
        scanf("%f", &p[i].sal_incadrare);
    }
}

void afiseaza(struct angajat *p, int dim)
{
    int i;

    for (i = 0; i < dim; i++)
    {
        printf("\n===========================");
        printf("\nCod angajat:%d", p[i].cod_angajat);
        printf("\nNume angajat:%s", p[i].nume);
        printf("\nPrenume angajat:%s", p[i].prenume);
        printf("\nAnul angajarii:%d", p[i].data_angajarii.an);
        printf("\nLuna angajarii:%d", p[i].data_angajarii.luna);
        printf("\nZiua angajarii:%d", p[i].data_angajarii.zi);
        printf("\nSalariul de incadrare:%f", p[i].sal_incadrare);
    }
    printf("\n");
}

float sal_mediu(struct angajat *p, int dim)
{
    int i;
    float sum = 0;

    for (i = 0; i < dim; i++)
    {
        sum += p[i].sal_incadrare;
    }

    return sum / dim;
}

int main()
{
    int i, n;
    struct angajat *v;

    printf("Introduceti numarul de angajati:");
    scanf("%d", &n);

    v = (struct angajat *)malloc(n * sizeof(struct angajat));

    for (i = 0; i < n; i++)
    {
        v[i].nume = (char *)malloc(DIM_MAX * sizeof(char));
        v[i].prenume = (char *)malloc(DIM_MAX * sizeof(char));
    }

    citeste(v, n);
    printf("Salariul mediu pe angajat este: %f", sal_mediu(v, n));
    afiseaza(v, n);

    for (i = 0; i < n; i++)
    {
        free(v[i].nume);
        free(v[i].prenume);
    }

    free(v);
    return 0;
}