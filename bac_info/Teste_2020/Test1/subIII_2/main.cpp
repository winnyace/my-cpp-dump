#include <iostream>
using namespace std;

/*
Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale din intervalul [2,20], n și
k, şi construieşte în memorie un tablou bidimensional cu n linii şi n∙k coloane, numerotate începând cu
1, astfel încât fiecare linie i (i∈[1,n]) memorează un şir crescător de termeni cu proprietatea că
primul termen este i, fiecare valoare apare în şir de exact k ori și oricare doi termeni alăturați au valori
egale sau consecutive.
Programul afişează pe ecran tabloul construit, fiecare linie a
tabloului pe câte o linie a ecranului, cu valorile aflate pe aceeaşi
linie separate prin câte un spaţiu.
*/


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