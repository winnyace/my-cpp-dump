#include <iostream>
using namespace std;

int main()
{
    int a[21][21] = {0}, n, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            if (i == 0)
                a[i][j] = n - j - 1;
            else if (i == n - 1)
                a[i][j] = j;
            else if (i + j < n - 1)
                a[i][j] = n - i - j - 1;
            else if (i + j > n - 1)
                a[i][j] = a[i][j-1] + 1;
            else
                a[i][j] = 0;
        }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << a[i][j] << " "; 
        cout << endl;
    }
}
