// Scrieți  un  program  C/C++  care  citește de la tastatură două numere naturale din intervalul [2,10^2], 
// n și m,  și  construiește  în  memorie  un  tablou  bidimensional  cu  n  linii  și  m  coloane, cu proprietatea că 
// parcurgându-l linie cu linie de sus în jos și fiecare linie de la stânga la dreapta, se obține șirul primelor 
// n*m pătrate perfecte impare, ordonat strict descrescător, ca în exemplu.  
// Elementele tabloului obținut se afișează pe ecran, fiecare linie a tabloului pe câte o linie 
// a ecranului, valorile de pe aceeași linie fiind separate prin câte un spațiu. 
// Exemplu: pentru n=2, m=3 se obține tabloul alăturat.
// 121 81 49 
//  25  9  1

#include <iostream>
using namespace std;

int main()
{
    int n, m, i, j, numar, a[101][101] = {0};
    do 
    {
        cin >> n >> m;
    } while (! (n >= 2 && n <= 100 && m >= 2 && m <= 100) );
    numar = 1;
    for (i = n-1; i >= 0; i--)
        for (j = m-1; j >= 0; j--)
        {
            a[i][j] = numar * numar;
            numar = numar + 2;
        }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
