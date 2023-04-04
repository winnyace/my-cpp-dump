#include <iostream>
using namespace std;

void secventa(int& n)
{
    int nou_n = 0, poz = 1;
    while (n != 0)
    {
        if (n%10 == 2)
        {
            if (n%100 == 22)
            {
                nou_n = (n%10-2) * poz + nou_n;
                poz *= 10; n /= 10;
                nou_n = n%10 * poz + nou_n;
                poz *= 10; n /= 10;
            }
            else
            {
                nou_n = n%10 * poz + nou_n;
                poz *= 10; n /= 10;
            }
        }
        else
        {
            nou_n = n%10 * poz + nou_n;
            poz *= 10; n /= 10;
        }
    }
    n = nou_n;
}

int main()
{
    int n;
    cin >> n;
    secventa(n);
    cout << n;
}
