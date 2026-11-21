// Într-un text cu cel mult 10^2 caractere, cuvintele sunt formate din litere mici ale alfabetului englez și sunt
// separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
// precizat, pe care îl transformă în memorie, eliminând numai ultima vocală care apare în text, ca în
// exemplu. Programul afișează pe ecran textul obținut sau mesajul nu exista, dacă în text nu există
// nicio vocală. Se consideră vocale literele a, e, i, o, u.
// Exemplu: dacă se citește textul: cuvantul ritm poate fi tradus rhythm
// se obține textul: cuvantul ritm poate fi trads rhythm

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101], rez[101], *cuv, voc[] = "aeiou", *cuv_ultim_voc, aux[20], s_copie[101];
    bool voc_gasit = false, voc_incuv_gasit;
    int poz, poz_sarit = 0;
    cin.get(s, 101);
    strcpy(s_copie, s);

    cuv = strtok(s, " ");
    while (cuv != NULL)
    {
        for (int i = 0; i < strlen(cuv); i++)
        {
            voc_incuv_gasit = false;
            if (strchr(voc, cuv[i]) != NULL)
            {
                voc_gasit = true; voc_incuv_gasit = true;
                cuv_ultim_voc = cuv;
                break;
            }
        }
        cuv = strtok(NULL, " ");
    }

    for (int i = 0; i < strlen(cuv_ultim_voc); i++)
    {
        if (strchr(voc, cuv_ultim_voc[i]) != NULL)
            poz = i;
    }

    cuv = strtok(s_copie, " ");
    while (cuv != NULL)
    {
        if (strcmp(cuv_ultim_voc, cuv) != 0)
        {
            strcat(rez, cuv);
            strcat(rez, " ");
            cuv = strtok(NULL, " ");
        }
        else
            break;
    }

    strcpy(aux, cuv_ultim_voc+poz+1);
    strcpy(cuv_ultim_voc+poz, aux);
    strcat(rez, cuv_ultim_voc);
    strcat(rez, " ");

    cuv = strtok(NULL, " ");
    while (cuv != NULL)
    {
        strcat(rez, cuv);
        strcat(rez, " ");
        cuv = strtok(NULL, " ");
    }
    if (voc_gasit == true)
    {
        strcpy(s, rez);
        cout << s;
    }
    else
        cout << "nu exista";
    return 0;
}