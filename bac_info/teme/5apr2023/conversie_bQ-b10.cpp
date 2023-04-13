#include <iostream>
using namespace std;

int main()
{
    int n, n_b10 = 0, putere = 1, c, baza;
    cout << "dati o baza: "; cin >> baza;
    cout << "dati un numar in baza " << baza << ": "; cin >> n;

    cout << "numarul " << n << " in baza 10 este: ";
    while (n > 0)
    {
        c = n % 10;
        n_b10 += c * putere;
        putere *= baza;
        n /= 10;
    }
    cout << n_b10;
}
