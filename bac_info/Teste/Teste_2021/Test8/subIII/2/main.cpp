#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, a[50][50], suma = 0, i, j;
    // ifstream f("date");
    // f >> n;
    do 
    {
        cin >> n;
    } while (!(n >= 5 && n <= 50));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            do
            {
                cout << "a[" << i << "][" << j << "] = "; cin >> a[i][j];
            } while (!(a[i][j] >= 0 && a[i][j] <= 100));
            // f >> a[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i < j && i + j > n - 1 && j < n-1)
                suma += a[i][j];
    cout << suma;
    return 0;
}
