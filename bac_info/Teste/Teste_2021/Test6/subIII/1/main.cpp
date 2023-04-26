#include <iostream>
using namespace std;

void numar(int n, int c, int& m)
{
    m = 0;
    int pozitie = 1;
    bool sw = false;
    while (n != 0)
    {
        if (n % 10 != c)
        {
            sw = true;
            if (n % 10 != 0)
            {
                m += pozitie * (n % 10);
                pozitie *= 10;
            }
        }
        n /= 10;
    }
    if (sw == false)
        m = -1;
}

int main()
{
    int n, c, m;
    cin >> n >> c;
    numar(n, c, m);
    cout << m;
    return 0;
}
