#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a[21][21] = {0}, m, n, i, j;
    bool sw = true;
    // ifstream f("date");

    // f >> m >> n;
    do 
    {
        cout << "m = "; cin >> m;
        cout << "n(trebuie impar) = "; cin >> n;
    } while (! (m >= 3 && m <= 21 && n >= 3 && n <= 21 && n % 2 != 0) );
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            // f >> a[i][j];
            cout << "a[" << i << "][" << j << "] = "; cin >> a[i][j];
        }

    for (j = 0; j < n && sw == true; j++)
        for (i = 0; i < m && sw == true; i++)
            if (a[i][j] != a[i][n-j-1])
                sw = false;
    if (sw)
        cout << "DA";
    else
        cout << "NU";
}
