// Într-un tablou bidimensional, cu elemente având valori numai în mulțimea {0,1}, numim
// linii „complementare” două linii cu proprietatea că oricare două elemente ale acestora,
// aflate pe aceeași coloană, sunt diferite.
// Scrieți un program C/C++ care citește de la tastatură trei numere naturale m, n și k
// (m,n e [2,20], k e [1,m]) și elementele unui tablou bidimensional cu m linii și n coloane,
// numere naturale din mulțimea {0,1}. Programul afișează pe ecran mesajul DA dacă există
// cel puțin o linie „complementară" cu linia a k-a a acestuia, sau mesajul NU în caz contrar.
// Exemplu: pentru m=7, n=3, k=2 și tabloul alăturat se afișează pe ecran mesajul DA
// 0 1 0
// 1 1 0
// 0 0 0
// 0 0 1
// 0 0 1
// 1 1 1
// 0 0 1

#include <iostream>
#include <fstream> //pt a testa mai rapid algoritmul că mi-e lene
using namespace std;

int main()
{
    int n, m, k, i, j, a[20][20];
    bool e_complementar;
    cin >> m >> n >> k;
    // ifstream f("date_intrare");
    // f >> m >> n >> k;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "] = "; cin >> a[i][j]; 
            // f >> a[i][j];
        }
    for (int i = 0; i < m; i++)
    {
        if (i != k)
        {
            e_complementar = true;
            for (int j = 0; j < n && e_complementar == true; j++)
                if (a[i][j] == a[k][j])
                    e_complementar = false;
            if (e_complementar == true)
            {
                cout << "DA";
                return 0;
            }
        }
    }
    if (e_complementar == false)
        cout << "NU";
    return 0;
}
