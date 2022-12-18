/*
Un cuvânt este prefix al unui alt cuvânt dacă se obține din acesta, prin eliminarea ultimelor sale litere.
Scrieți un program C/C++ care citește de la tastatură un număr natural n (n e [2,20]) și apoi n cuvinte
distincte, fiecare fiind format din cel mult 20 de caractere, numai litere mici ale alfabetului englez.

La introducerea datelor, după fiecare cuvânt se tastează Enter. Programul afișează pe
ecran, separate prin câte un spațiu, cuvintele care îl au drept prefix pe ultimul cuvânt citit.
Dacă nu există astfel de cuvinte, se afișează pe ecran mesajul nu exista

Exemplu: dacă n = 6 și se citesc cuvintele 'raita', 'grai', 'raid', 'raion', 'straie', 'rai', se afișează: raita, raid, raion
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[21][21], prefix[256], cuv[30];
    int n, len;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    strcpy(prefix, s[n-1]);
    len = strlen(prefix);
    for (int i = 0; i < n-1; i++)
    {
        strncpy(cuv, s[i], len);
        if (strcmp(prefix, cuv) == 0)
            cout << s[i] << endl;
    }
    return 0;
}
