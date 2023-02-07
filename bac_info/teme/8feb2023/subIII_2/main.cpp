#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, k, a[101][101] = {0};
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cout << i << " " << j << ":"; cin >> a[i][j];
        }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    for (int i = n-k; i > 1; i--)
    {
        int aux = a[k][i-1];
        a[k][i-1] = a[k][i];
        a[k][i] = aux;
    }
    cout << endl << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
