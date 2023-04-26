#include <iostream>
using namespace std;

int main()
{
    int x, x_copie, a[10][10] = {0}, i, j, n;
    cin >> x;
    x_copie = x;
    while (x_copie != 0)
    {
        n++;
        x_copie /= 10;
    }
    for (j = n-1; j >= 0; j--)
    {
        for (i = 0; i < n; i++)
            a[i][j] = x % 10;
        x /= 10;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
