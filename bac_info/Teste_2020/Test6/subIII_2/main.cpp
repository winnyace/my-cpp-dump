// Într-un text cu cel mult 100 de caractere, cuvintele sunt formate din litere mici ale alfabetului englez și
// sunt separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
// menționat și afișează pe ecran, pe linii separate, toate cuvintele sale pentru care numărul de vocale
// este strict mai mic decât numărul de consoane. Dacă nu există niciun astfel de cuvânt, se afișează pe
// ecran mesajul nu exista. Se consideră vocale literele din mulțimea a, e, i, o, u.
// Exemplu: pentru textul "ei au plantat tamarix ea a adus iasomie", 
// se va afisa, nu in acesta ordine "plantat tamarix"

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101], *aux, cuv[30], voc[] = "aeiou";
    int c_voc, c_con;
    bool citit = false;
    cin.get(s, 101);
    aux = strtok(s, " ");
    while (aux != NULL)
    {
        c_voc = 0; c_con = 0;
        strcpy(cuv, aux);

        for (int i = 0; i < strlen(cuv); i++)
        {
            if (strchr(voc, cuv[i]) == 0)
                c_con++;
            else
                c_voc++;
        }
        if (c_voc < c_con)
        {
            citit = true;
            cout << cuv << endl;
        }
        aux = strtok(NULL, " ");
    }
    if (citit == false)
        cout << "nu exista";
}