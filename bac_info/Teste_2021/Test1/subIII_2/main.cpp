// Scrieți un program C/C++ care citește de la tastatură numărul natural n (n e [2,10^2]) și elementele unui
// tablou bidimensional cu n linii și n coloane, numere naturale din intervalul [0,10^9].
// Programul afișează pe ecran, separate prin câte un spațiu, elementele primului pătrat
// concentric, parcurs în sens invers al acelor de ceasornic, începând din colțul său stânga-
// sus, ca în exemplu. Primul pătrat concentric este format din prima și ultima linie, prima și
// ultima coloană a tabloului.
// Exemplu: pentru n=5 și tabloul alăturat, se afișează pe ecran numerele
// 1 2 3 4 5 6 7 8 9 0 2 4 6 8 1 3 
// 1 3 1 8 6
// 2 9 2 7 4
// 3 5 8 5 2
// 4 1 6 3 0
// 5 6 7 8 9

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a[100][100] = {0}, n;
    // ifstream f("date");
    // f >> n;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "] = "; cin >> a[i][j];
            // f >> a[i][j];
        }
    for (int i = 0; i < n; i++)
        cout << a[i][0] << " ";
    for (int i = 1; i < n; i++)
        cout << a[n-1][i] << " ";
    for (int i = n-2; i >= 0; i--)
        cout << a[i][n-1] << " ";
    for (int i = n-1; i >= 1; i--)
        cout << a[0][i] << " ";
    return 0;
}