// Scrieţi definiţia completă a subprogramului interval care are 2 parametri prin care
// primeşte un tablou unidimensional cu maximum 100 de numere naturale mai mici decât
// 1000 şi numărul de elemente din tabloul unidimensional. Subprogramul returnează
// numărul de elemente din tabloul unidimensional care aparţin intervalului închis determinat
// de primul şi respectiv ultimul element al tabloului. Exemplu: dacă tabloul are 6 elemente şi
// este de forma (12,27,6,8,9,2), subprogramul va returna valoarea 5. (10p.)

#include <iostream>
using namespace std;

int interval(int v[], int n)
{
    int i, a, b, con = 0;
    if (v[0] > v[n-1])
    {
        a = v[n-1];
        b = v[0];
    }
    else
    {
        a = v[0];
        b = v[n-1];
    }
    for (i = 0; i < n; i++)
        if (v[i] >= a && v[i] <= b)
            con++;
    return con;
}

int main()
{
    int v[100], n, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << i+1 << " "; cin >> v[i];
    }
    cout << "numere intre " << v[0] << " si " << v[n-1] << ": " << interval(v, n);
    return 0;
}
