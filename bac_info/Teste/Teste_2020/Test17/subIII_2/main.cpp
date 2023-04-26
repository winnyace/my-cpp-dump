// Într-un text cu cel mult 10^2 caractere cuvintele sunt formate din litere mici ale alfabetului englez și sunt
// separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
// menționat, pe care îl modifică în memorie, duplicând fiecare cuvânt format numai din vocale. Cuvântul
// duplicat este separat prin câte un spațiu de cuvintele vecine. Textul transformat este afișat pe ecran, iar
// dacă nu există astfel de cuvinte, se afișează pe ecran mesajul nu exista.
// Exemplu: dacă textul citit este oaia aia alba e a ei
// se obține textul oaia oaia aia aia alba e e a a ei ei 

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101], *cuv, rez[101] = {'\0'}, voc[] = "aeiou", s_copie[101];
    cin.get(s, 101);
    strcpy(s_copie, s);

    cuv = strtok(s, " ");
    while (cuv != NULL)
    {
        bool consoana_gasit = false;
        for (int i = 0; i < strlen(cuv) && consoana_gasit == false; i++)
            if (strchr(voc, cuv[i]) == 0)
                consoana_gasit = true;
        if (consoana_gasit == false)
        {
            strcat(rez, cuv);
            strcat(rez, " ");
            strcat(rez, cuv);
            strcat(rez, " ");
        }
        else
        {
            strcat(rez, cuv);
            strcat(rez, " ");
        }
        cuv = strtok(NULL, " ");
    }
    rez[strlen(rez)-1] = '\0';
    int l = strlen(s);
    if (strcmp(rez, s_copie) == 0)
        cout << "nu exista";
    else
    {
        strcpy(s, rez);
        cout << s;
    }
    return 0;
}
