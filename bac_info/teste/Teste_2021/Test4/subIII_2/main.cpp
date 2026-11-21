// Scrieţi un program C/C++ care citeşte de la tastatură numere naturale din intervalul [2,10^2]: m, n şi
// elementele unui tablou bidimensional cu m linii şi n coloane. Programul afișează pe ecran, pentru fiecare
// linie a sa, cea mai mare dintre valorile strict mai mici decât 21 memorate în aceasta, sau mesajul
// nu exista, dacă nu există nicio astfel de valoare pe linia respectivă. Numerele, respectiv mesajele,
// sunt afișate pe linii separate ale ecranului, în ordinea liniilor corespunzătoare din tablou.
// Exemplu: pentru m=3, n=5 și tabloul alăturat se afişează pe ecran
// 16
// nu exista
// 9

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int m, n, num_max;
    ifstream f("date");
    // cin >> m >> n;
    f >> m >> n;
    int a[m][n];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            f >> a[i][j];
    
    for (int i = 0; i < m; i++)
    {
        num_max = 0;
        for (int j = 0; j < n; j++)
            if (num_max < a[i][j] && a[i][j] < 21)
                num_max = a[i][j];
        if (num_max == 0)
            cout << "nu exista\n";
        else
            cout << num_max << "\n";
    }
}
