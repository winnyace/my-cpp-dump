#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a[21][21] = {0}, m, n;
    bool este_simetric = true;
    cin >> m >> n;
    // ifstream f("date");
    // f >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "] = "; cin >> a[i][j];
            // f >> a[i][j];
        }
    int mijloc = n / 2 + 1;
    for (int i = 0; i < m && este_simetric == true; i++)
        for (int j = 0; j < mijloc && este_simetric == true; j++)
            if (a[i][j] != a[i][mijloc + (n - mijloc) - j - 1])
                este_simetric = false;
    if (este_simetric == true)
        cout << "DA";
    else
        cout << "NU";
}