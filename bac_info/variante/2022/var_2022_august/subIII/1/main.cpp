#include <iostream>
using namespace std;

void schimb(int& n, int x, int p)
{
    int putere = 1, aux = 0;
    while (p != 0) {
        aux = aux + n % 10 * putere;
        n /= 10; 
        putere *= 10;
        p--;
    }
    n /= 10;
    n = n * 10 + x;
    n = n * putere + aux;
}

int main()
{
    int n, x, p;
    cin >> n >> x >> p;
    schimb(n, x, p);
    cout << n;
    return 0;
}
