#include <iostream>
using namespace std;

int main()
{
    int n, n_b10 = 0, aux = 1, c;
    cout << "dati un numar in baza 2: "; cin >> n;

    cout << "numarul " << n << " in baza 10 este: ";
    while (n > 0)
    {
        c = n % 10;
        n_b10 += c * aux;
        aux *= 2;
        n /= 10;
    }
    cout << n_b10;
}
