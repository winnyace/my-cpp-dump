#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, k, a[20][20], aux;
    // ifstream f("date_pt_test");
    // f >> n >> k;
    do {
        cout << "n (intre 2 si 20 inclusiv sunt valorile admise) = "; cin >> n;
        cout << "k (intre 1 si n inclusiv sunt valorile admise) = "; cin >> k;
    } while (!(n >= 2 && n <= 20 && k >= 1 && k <= n));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            cout << "a[" << i << "][" << j << "] = "; cin >> a[i][j];
        }

    aux = a[k][n-k];
    for (int i = n-k; i > 1; i--)
        a[k][i] = a[k][i-1];
    a[k][1] = aux;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
