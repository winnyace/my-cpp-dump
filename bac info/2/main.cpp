#include <iostream>
using namespace std;

int main()
{
    int n, k, a[20][20] = {0}, con_sir;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        con_sir = 1;
        for (int j = 1; j <= n*k; j++) {
            if (j == 1)
                a[i][j] = i;
            else if (con_sir <= 2 || con_sir == 1) {
                a[i][j] = a[i][j-1];
                con_sir++;
            }
            else if (con_sir >= 2) {
                a[i][j] = a[i][j-1] + 1;
                con_sir = 1;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n*k; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}