#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long int produs = 1;
    int n, p = 1, i, max = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
        produs = produs * i;
    for (p = 1; p < n; p++) {
        i = pow(45, p);
        if (produs % i == 0) {
            if (max < i)
                max = i;
        }
        else if (max != 0)
            break;
    }
    cout << max;
}
