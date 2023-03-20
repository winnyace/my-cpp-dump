// Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale din intervalul [2,10^2], m și n, şi
// construieşte în memorie un tablou bidimensional cu m linii şi n coloane, numerotate începând cu 1, astfel
// încât elementul de pe linia i şi coloana j primeşte ca valoare ultima cifră a produsului i * j.
// Programul afişează pe ecran elementele tabloului obținut, linie cu linie, fiecare linie a tabloului
// pe câte o linie a ecranului, cu valorile aflate pe aceeaşi linie separate prin câte un spaţiu.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, m, a[100][100] = {0};
    cin >> m >> n;

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] = (i*j) % 10;
    
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
