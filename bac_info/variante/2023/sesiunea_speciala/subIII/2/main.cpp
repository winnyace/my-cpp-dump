#include <iostream>
using namespace std;

int main()
{
    int a[20][20], n;
    do {
        cin >> n;
    } while (!(n >= 2 && n <= 20));
    for (int i = 0; i < n; i++)
        do {
            cin >> a[0][i];
        } while (!(a[0][i] >= 0 && a[0][i] < 100));
    for (int i = 1; i < n; i++) 
        for (int j = 0; j < n; j++)
            a[i][j] = -1; 

    for (int i = 1; i < n; i++) 
        for (int j = n-1; j >= 0; j--)
            if (i+j <= n-1)
                a[i][j] = (a[i-1][j] + a[i-1][j+1]) % 100;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
