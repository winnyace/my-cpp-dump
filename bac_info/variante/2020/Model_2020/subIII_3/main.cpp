#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("numere.in");
    int n, x, i, k = 0;
    f >> n;
    int a[n] = {0};
    while (f >> x)
        a[x]++;
    for (i = 1; i <= n; i++)
        if (a[i] == 0) {
            cout << i << endl; k++;
        }
    cout << k;
}
