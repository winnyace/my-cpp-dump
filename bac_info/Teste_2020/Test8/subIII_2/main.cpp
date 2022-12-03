// Scrieți un program C/C++ care citește de la tastatură numere naturale: n (n e [2,20]), k (k e [1,n]) și
// n∙n numere din intervalul [0,10^9], elemente ale unui tablou bidimensional cu n linii și n coloane,
// numerotate începând de la 1. Programul transformă tabloul în memorie, deplasând circular spre stânga,
// cu câte o poziție, toate elementele situate pe linia k, în stânga diagonalei principale, ca în exemplu.
// Elementele tabloului obținut sunt afișate pe ecran, fiecare linie pe câte o linie a ecranului, cu elementele
// fiecărei linii separate prin câte un spațiu
// exemplu: pentru n=6, k=4 și tabloul 
// 1 2 3 4 5 6
// 6 7 8 9 0 1
// 2 4 6 8 0 2
// 1 3 5 (<*) 7 9 5
// 6 2 7 4 5 7
// 3 9 4 8 5 7
// se obține tabloul 
// 1 2 3 4 5 6
// 6 7 8 9 0 1
// 2 4 6 8 0 2
// 3 5 1 (<*) 7 9 5
// 6 2 7 4 5 7
// 3 9 4 8 5 7

#include <iostream>
using namespace std;

int main()
{
    int n, k, a[21][21], aux;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cout << i << " " << j << ": "; cin >> a[i][j];
        }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << endl;

    aux = a[k][1];
    for (int i = 2; i <= n/2; i++)
        a[k][i-1] = a[k][i];
    a[k][n/2] = aux;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}