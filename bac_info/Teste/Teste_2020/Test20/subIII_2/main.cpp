// Un text cu cel mult 100 de caractere conține cuvinte și numere, separate prin câte un spațiu. Cuvintele
// sunt formate numai din litere mici ale alfabetului englez, iar numerele sunt reale, pozitive, cu partea
// întreagă și partea zecimală separate prin simbolul virgulă, sau numai cu partea întreagă, ca în exemplu.
// Scrieți un program C/C++ care citește de la tastatură un text de tipul precizat și îl transformă în
// memorie, înlocuind fiecare număr real cu partea întreagă a acestuia.
// Exemplu: pentru textul
// partea intreaga a lui 5,75 este egala cu a lui 5,25 si cu a lui 5 si este 5
// se afișează pe ecran
// partea intreaga a lui 5 este egala cu a lui 5 si cu a lui 5 si este 5

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101], rezultat[101], *cuv;
    cin.get(s, 101);
    cuv = strtok(s, " ");
    while (cuv != NULL)
    {
        if (cuv[0] >= '0' && cuv[0] <= '9')
        {
            strncat(rezultat, cuv, 1);
            strcat(rezultat, " ");
        }
        else
        {
            strcat(rezultat, cuv);
            strcat(rezultat, " ");
        }
        cuv = strtok(NULL, " ");
    }
    strcpy(s, rezultat);
    cout << s;
    return 0;
}