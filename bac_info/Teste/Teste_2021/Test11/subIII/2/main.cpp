#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, a[20][20], k;
    ifstream f("date_pt_test");
    do {
        cout << "n(intre 2 si 20 inclusiv doar) = "; cin >> n;
    }while (!(n >= 2 && n <= 20));
    do {
        cout << "k(intre 2 si n inclusiv doar) = "; cin >> k;
    }while (!(k >= 2 && k <= n));
    // f >> n >> k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            cout << "a[" << i << "][" << j << "] = "; cin >> a[i][j];
            // f >> a[i][j];
        }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) 
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << "\nmatricea dupa ce am realizat modificarile cerute:\n\n";
    for (int i = 1; i <= k-1; i++) {
        int aux = a[k][i];
        a[k][i] = a[i][k];
        a[i][k] = aux;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) 
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}