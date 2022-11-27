// O valoare k polarizează două șiruri dacă există doi termeni care au acea valoare, unul fiind în primul
// șir, iar celălalt în al doilea șir.
// Scrieți un program C/C++ care citește de la tastatură numere naturale din intervalul [1,20]: m, n și
// elementele unui tablou bidimensional cu m linii și n coloane, cu proprietatea că nu există două elemente
// egale situate pe aceeași linie sau pe aceeași coloană. Programul afișează pe ecran valorile care pot
// polariza două șiruri, și anume șirul format din elementele de pe prima coloană, respectiv șirul format din
// elementele ultimei coloane a tabloului.
// Valorile sunt afișate într-o ordine oarecare, separate prin câte un spațiu, iar dacă nu
// există astfel de valori se afișează pe ecran mesajul nepolarizate.
// Exemplu: pentru m=4, n=5 și tabloul alăturat se afișează pe ecran, nu neapărat în
// această ordine, numerele 5 6
// 3 7 1 2 5
// 2 4 5 9 6
// 6 2 7 8 1
// 5 3 2 7 8

#include <iostream>
using namespace std;

int main()
{
    int m, n, i, j, a[50][50];
    cin >> m >> n;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            do
            {
                cout << "a[" << i << "][" << j << "] = ";
                cin >> a[i][j];
            } while (!(a[i][j] >= 1 && a[i][j] <= 20));
        cout << endl;
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    for (i = 0; i < m; i++)
        for (j = 0; j < m; j++)
            if (a[i][0] == a[j][n-1])
                cout << a[i][0] << " ";
    return 0;
}
