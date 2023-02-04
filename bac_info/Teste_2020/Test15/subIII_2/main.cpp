// Într-un text cu cel mult 100 de caractere, cuvintele sunt formate din litere mici ale alfabetului englez și 
// sunt separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul 
// menționat și afișează pe ecran numărul de cuvinte ale sale formate dintr-un număr egal de vocale și 
// consoane. Se consideră vocale literele din mulțimea a, e, i, o, u. 
// Exemplu: pentru textul   
// cuvantul consoane are un numar de patru vocale si patru consoane  
// se afișează pe ecran 6.

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101], *cuv, voc[] = "aeiou";
    int nr_con, nr_voc, nr_cuv = 0;
    cin.get(s, 101);
    cuv = strtok(s, " ");
    while (cuv != NULL)
    {
        nr_con = 0; nr_voc = 0;
        for (int i = 0; i < strlen(cuv); i++)
            if (strchr(voc, cuv[i]) == 0)
                nr_voc++;
            else
                nr_con++;
        if (nr_con == nr_voc)
            nr_cuv++;
        cuv = strtok(NULL, " ");
    }
    cout << nr_cuv;
}
