// Sa se creeze o lista liniara simplu inlantuita care sa memoreze urmatoarele informatii despre studentii unei grupe formata din n studenti:
// - numele(sir de maxim 30 de caractere);
// - prenumele(sir de maxim 30 de caractere);
// - 5 note intr - un vector cu 5 componente intregi;
// 1) Sa se afiseze numele, prenumele si media fiecarui student.
// 2) Sa se scrie o functie care calculeaza si returneaza media grupei.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    char nume[30];
    char prenume[30];
    int note[5];
    float medie;
    struct student *next;
} Student;

Student *primul_student = NULL; // pointer catre primul student din lista

// Functie pentru adaugarea unui student la lista
void adauga_student(char nume[], char prenume[], int note[])
{
    Student *nou_student = (Student *)malloc(sizeof(Student));
    strcpy(nou_student->nume, nume);
    strcpy(nou_student->prenume, prenume);
    memcpy(nou_student->note, note, sizeof(int) * 5);
    nou_student->medie = 0;
    nou_student->next = NULL;

    // Calculam media si o setam pentru noul student
    int i;
    for (i = 0; i < 5; i++)
    {
        nou_student->medie += note[i];
    }
    nou_student->medie /= 5;

    // Adaugam noul student la sfarsitul listei
    if (primul_student == NULL)
    {
        primul_student = nou_student;
    }
    else
    {
        Student *curent = primul_student;
        while (curent->next != NULL)
        {
            curent = curent->next;
        }
        curent->next = nou_student;
    }
}

// Functie pentru afisarea informatiilor despre toti studentii
void afisare_studenti()
{
    Student *curent = primul_student;
    while (curent != NULL)
    {
        printf("%s %s, media: %.2f\n", curent->nume, curent->prenume, curent->medie);
        curent = curent->next;
    }
}

// Functie pentru calcularea mediei grupei
float media_grupei()
{
    float suma = 0;
    int numar_studenti = 0;
    Student *curent = primul_student;
    while (curent != NULL)
    {
        suma += curent->medie;
        numar_studenti++;
        curent = curent->next;
    }
    return suma / numar_studenti;
}

// Exemplu de utilizare a functiilor
int main()
{
    adauga_student("Popescu", "Ion", (int[]){8, 9, 7, 6, 10});
    adauga_student("Ionescu", "Maria", (int[]){10, 10, 9, 8, 9});
    adauga_student("Georgescu", "Alex", (int[]){7, 8, 6, 9, 8});

    printf("Informatii despre studenti:\n");
    afisare_studenti();

    printf("Media grupei: %.2f\n", media_grupei());

    return 0;
}
