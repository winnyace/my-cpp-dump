// Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (n ∈ [2,10^2]) și
// un șir de n numere naturale din intervalul [0,10^4] și construiește în memorie un tablou
// bidimensional cu n linii şi n coloane, numerotate începând de la 0, astfel încât parcurgând
// orice coloană numerotată cu un număr par, de jos în sus, sau orice coloană numerotată cu
// un număr impar, de sus în jos, se obține șirul citit, ca în exemplu. Programul afișează pe
// ecran tabloul obținut, fiecare linie a tabloului pe câte o linie a ecranului, elementele de pe
// aceeași linie fiind separate prin câte un spațiu.
// Exemplu: dacă n=4, iar șirul citit este 7 2 5 3, se obține tabloul
// alăturat.
// (10p.)
// 3 7 3 7
// 5 2 5 2
// 2 5 2 5
// 7 3 7 3

#include <iostream>
using namespace std;

int main()
{
    int a[100][100] = {0}, n, v[100], i, j;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> v[i];
    
    for (j = 0; j < n; j++)
        if (j % 2 == 0)
            for (i = n-1; i >= 0; i--)
                a[i][j] = v[n-i-1];
        else
            for (i = 0; i < n; i++)
                a[i][j] = v[i];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
