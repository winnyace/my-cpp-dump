#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, m, a[20][20];
    ifstream f("date_pentru_testare");
    do {
        cout << "dati numarul de linii si coloane (liniile primele) (numere acceptate intre 2 si 20): "; cin >> m >> n;
    } while (!(m >= 2 && n >= 2 && m <= 20 && n <= 20));
    // f >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            do {
                cout << "a[" << i << "][" << j << "] = "; cin >> a[i][j];
            } while (!(a[i][j] >= 0 && a[i][j] <= 400));
            // f >> a[i][j];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++)
            if(a[i][0] == a[j][n-1] && a[i][0] != 0)
                cout << a[i][0] << " ";
    }
    return 0;
}
