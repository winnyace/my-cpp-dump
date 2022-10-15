#include <iostream>
using namespace std;

void puture(int n, int &d, int &p)
{
    int k_p, k_d = 2;
    while (n > 1) {
        k_p = 0; 
        while (n % k_d == 0) {
            k_p++;
            n /= k_d;
        }
        if (k_p > p) {
            p = k_p;
            d = k_d;
        }
        else if (k_p == p)
            if (k_d > d)
                d = k_d;
        k_d++;
    }
}

int main()
{
    int n, d = 0, p = 0;
    cin >> n;
    puture(n, d, p);
    cout << d << " " << p;
}
