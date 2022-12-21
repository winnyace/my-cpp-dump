#include <iostream>
using namespace std;

int factori(int n, int m)
{
    int d = 2, p_n, p_m, con = 0;
    while (n > 1 && m > 1)
    {
        p_n = 0; p_m = 0;
        while (n%d == 0)
        {
            p_n++;
            n /= d;
        }
        while (m%d == 0)
        {
            p_m++;
            m /= d;
        }
        if (p_n == p_m)
            con++;
        d++;
    }
    return con;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << factori(n, m);
}