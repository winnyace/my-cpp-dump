/*
Într-un text cu cel mult 10^2 caractere, cuvintele sunt formate din litere mici și mari ale alfabetului englez
și sunt separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de
tipul precizat, pe care îl transformă, astfel încât fiecare cuvânt să aibă prima literă mare, și toate
celelalte litere mici. Textul obținut se afişează pe ecran.
Exemplu: dacă de la tastatură se introduce textul ABIA aSTept sa Merg lA scoala
se obține textul Abia Astept Sa Merg La Scoala
*/

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    char s[101], *cuv, rez[101] = {0};
    cin.get(s, 101);
    cuv = strtok(s, " ");
    while (cuv != NULL)
    {
        for (int i = 0; i < strlen(cuv); i++)
        {
            if (i == 0)
                cuv[i] = toupper(cuv[i]);
            else if (i > 0)
                cuv[i] = tolower(cuv[i]);
        }
        strcat(rez, cuv);
        strcat(rez, " ");
        cuv = strtok(NULL, " ");
    }
    cout << rez;
}
