// Un cuvânt este sufix al unui alt cuvânt dacă se obține din acesta, prin eliminarea primelor sale litere.
// Scrieți un program C/C++ care citește de la tastatură două numere naturale n și k (n e [2,20],
// k e [1,n]) și apoi n cuvinte distincte, fiecare fiind format din cel mult 20 de caractere, numai litere mici
// ale alfabetului englez.
// La introducerea datelor, după fiecare cuvânt se tastează Enter. Programul
// afișează pe ecran, separate prin câte un spațiu, cuvintele care îl au drept sufix
// pe al k-lea cuvânt citit, ca în exemplu. Dacă nu există astfel de cuvinte, se
// afișează pe ecran mesajul nu exista.
// Exemplu: dacă n=7, k=3 și se citesc cuvintele de mai jos, pe ecran se afișează 
// paratirisi hiritisi
//
// isihast
// paratirisi
// isi
// meremetisire
// acolisitor
// hiritisi
// paraponisit

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, k, l_k;
    char s[20][21] = {'\0'};
    bool sw = false;

    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    l_k = strlen(s[k]);
    for (int i = 1; i <= n; i++)
    {
        if (i != k)
        {
            int l = strlen(s[i]);
            if (strcmp (s[i]+l-l_k, s[k]) == 0)
                cout << s[i] << " ";
        }
    }
}
