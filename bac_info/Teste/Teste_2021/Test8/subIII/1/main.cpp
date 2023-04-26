#include <iostream>
using namespace std;

int nrfp(int n)
{
    int con, con_max = -1, d, p, num = -1, i_c;
    for (int i = n; i >= 2; i--)
    {
        i_c = i;
        d = 2;
        con = 0;
        while (i_c > 1)
        {
            p = 0;
            while (i_c % d == 0)
            {
                i_c /= d;
                p++;
            }
            if (p > 0)
                con++;
            d++;
        }
        if (con > con_max)
        {
            con_max = con;
            num = i;
        }
        else if (con == con_max && i > num)
            num = i;
    }
    return num;
}

int main()
{
    int n;
    cin >> n;
    cout << nrfp(n);
}
