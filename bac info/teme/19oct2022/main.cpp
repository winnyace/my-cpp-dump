#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n, a[100][100];
    cin >> n;
    for (int i = 0; i <= n+1; i++) {
        a[i][0] = INT_MAX;
        a[i][n+1] = INT_MAX;
        a[0][i] = INT_MAX;
        a[n+1][i] = INT_MAX;
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            cout << i << " " << j << ": "; cin >> a[i][j];
        }
    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= n; j++) {
            if (a[i-1][j] > a[i][j])
                if (a[i+1][j] > a[i][j])
                    if (a[i][j-1] > a[i][j])
                        if (a[i][j+1] > a[i][j])
                            cout << a[i][j] << " ";
        }
}