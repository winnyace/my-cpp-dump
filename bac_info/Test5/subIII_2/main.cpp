// Un text cu cel mult 100 de caractere conține cuvinte și numere, separate prin câte un spațiu. Cuvintele
// sunt formate numai din litere mici ale alfabetului englez, iar numerele sunt reale, pozitive, cu partea
// zecimală și partea întreagă separate prin simbolul virgulă, sau numai cu partea întreagă, ca în exemplu.
// Scrieți un program C/C++ care citește de la tastatură un text de tipul precizat și afișează pe ecran
// numărul de valori întregi din text.
// Exemplu: pentru textul
// grus leucogeranus are 1,40 m inaltime si traieste intre 30 si 40 de ani
// se afișează pe ecran 2

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101], cuv[50];
    int poz, con = 0;
    bool eint;
    size_t i, j;
    
    cin.get(s, 101);
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ')
        {
            strcpy(cuv, s+i);
            strtok(cuv, " ");
            poz = i;
            i += strlen(cuv);

            eint = true;
            for (j = 0; j < strlen(cuv) && eint == true; j++)
                if (cuv[j] == ',')
                    eint == false;
            if (eint == true)
                con++;
        }
    }
    cout << con;
}