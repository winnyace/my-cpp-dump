// Scrieți un program C/C++ care citește de la tastatură un număr natural, n (n∈[2,20]), și construiește
// în memorie un tablou bidimensional cu n linii și n coloane, astfel încât fiecare linie a sa are proprietățile:
// • elementul situat pe diagonala secundară are valoarea n;
// • începând de la diagonala secundară, spre stânga, elementele formează un șir strict descrescător de
// numere consecutive, iar începând de la diagonala secundară, spre dreapta, elementele formează tot
// un șir strict descrescător de numere consecutive.
// Programul afișează pe ecran tabloul construit, fiecare linie a tabloului pe câte o linie a
// ecranului, cu elementele aflate pe aceeași linie separate prin câte un spațiu.
// Exemplu: dacă n=5 se afișează pe ecran tabloul alăturat.

#include <iostream>
using namespace std;

int main()
{
    int n, a[20][20] = {0}, i, j;
    do
    {
        cout << "n = "; cin >> n;
    } while (!(n >= 2 && n <= 20));

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (i + j == n-1)
                a[i][j] = n;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (i + j > n-1)
            {
                a[i][j] = a[i][j-1]-1; 
                a[n-1-j][n-1-i] = a[i][j];
            }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
