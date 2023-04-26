/*
Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale din intervalul
[2,20], n și k, şi construieşte în memorie un tablou bidimensional cu n∙k linii şi n
coloane, numerotate începând cu 1, astfel încât fiecare coloană i (i∈[1,n]) memorează
un şir crescător de termeni cu proprietatea că primul termen este i, fiecare valoare apare
în şir de exact k ori și oricare doi termeni alăturați au valori egale sau consecutive.
Programul afişează pe ecran tabloul construit, fiecare linie a tabloului pe câte o linie a
ecranului, cu valorile aflate pe aceeaşi linie separate prin câte un spaţiu.
Exemplu: dacă n=4 și k=3, se afişează pe ecran tabloul
1 2 3 4
1 2 3 4
1 2 3 4
2 3 4 5
2 3 4 5
2 3 4 5
3 4 5 6
3 4 5 6
3 4 5 6
4 5 6 7
4 5 6 7
4 5 6 7
*/

#include <iostream>
using namespace std;

int main()
{
    int n, k, a[400][400] = {0}, con = 1;
    cin >> n >> k;

    a[1][1] = 1;
    for (int i = 2; i <= n*k; i++)
    {
        if (con < k)
        {
            a[i][1] = a[i-1][1];
            con++;
        }
        else
        {
            a[i][1] = a[i-1][1]+1;
            con = 1;
        }
    }
    
    for (int i = 1; i <= n*k; i++)
        for (int j = 2; j <= n; j++)
            a[i][j] = a[i][j-1]+1;

    for (int i = 1; i <= n*k; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
