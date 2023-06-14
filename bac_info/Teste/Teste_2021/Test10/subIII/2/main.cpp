#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    int m, n, a[20][20];
    // do {
    //     cout << "dati nr linii si nr coloane, in ordinea scrisa de program. valori doar intre [2;20]: "; cin >> m >> n;
    // } while (!(m >= 2 && n >= 2 && m <= 20 && n <= 20));
    ifstream f("date_pt_test");
    f >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            // cout << "a[" << i << "][" << j << "] = "; cin >> a[i][j];
            f >> a[i][j];
        }
    for (int i = 0; i < n - 1; i++)
        for (int j = 1; j < m; j++)
            if (a[0][i] == a[j][n - 1])
                cout << a[0][i] << " ";
    return 0;
}
