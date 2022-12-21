#include <iostream>
using namespace std;

int main()
{
    int n, a[20][20] = {0}, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (i+j == n-1)
                a[i][j] = n;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            if (i == 0 && i+j < n-1)
                a[i][j] = j+1;
            else if (j == 0 && i+j < n-1)
                a[i][j] = a[i-1][j] + 1;
            else if (i+j < n-1)
                a[i][j] = a[i][j-1] + 1;
            else if (i+j > n-1)
                a[i][j] = a[i][j-1] - 1;
        }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}