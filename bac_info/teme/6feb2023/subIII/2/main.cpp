#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n = 5, k = 4, a[21][21], i, j, aux;
    do 
    {
        cin >> n;
    } while (! (n >= 2 && n <= 20) );
    do
    {
        cin >> k;
    } while (! (k >= 2 &&  k <= n) );
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
        {
            cout << i << " " << j << ": "; cin >> a[i][j];
        }
    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    for (j = 1; j < k; j++)
    {
        aux = a[k][j];
        a[k][j] = a[j][k];
        a[j][k] = aux;
    }
    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}