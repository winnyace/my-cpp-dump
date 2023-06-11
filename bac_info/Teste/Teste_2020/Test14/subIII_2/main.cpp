// Un text are cel mult 100 de caractere și este format din cuvinte și numere, separate prin câte un spațiu.
// Cuvintele sunt formate numai din litere ale alfabetului englez. Toate numerele sunt reale și sunt formate
// numai din parte întreagă sau din parte întreagă și parte fracționară, separate prin virgulă (,), numerele
// negative fiind precedate de semnul minus (-). Cel puțin unul dintre numerele reale este negativ. Scrieți
// un program C/C++ care citește de la tastatură textul, pe care îl transformă în memorie, înlocuind fiecare
// număr negativ cu valoarea sa absolută. Programul afișează apoi pe ecran textul obținut.
// Exemplu: pentru textul Modul de -3,24 este 3,24 si modul de -15 este 15
// se va afișa pe ecran textul: Modul de 3,24 este 3,24 si modul de 15 este 15 

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101], *cuv, aux[10], rez[101] = {'\0'};
    cin.get(s, 101);
    cuv = strtok(s, " ");
    while (cuv != NULL)
    {
        if (cuv[0] == '-')
        {
            strcpy(aux, cuv+1);
            strcat(rez, aux);
            strcat(rez, " ");
        }
        else
        {
            strcat(rez, cuv);
            strcat(rez, " ");
        }
        cuv = strtok(NULL, " ");
    }
    if (strcmp(s, rez) != 0)
    {
        strcpy(s, rez);
        cout << s;
    }
    else
        cout << "nu";
    return 0;
}
