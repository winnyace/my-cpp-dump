#include <iostream>
using namespace std;

void imog(int x, int y, int& rez)
{
    int imp_x = 0, imp_y = 0, p = 1;
    while (x != 0) 
    {
        if (x % 10 % 2 != 0)
            imp_x = imp_x * 10 + x % 10;
        x /= 10;
    }
    while (y != 0) 
    {
        if (y % 10 % 2 != 0) 
        {
            imp_y = imp_y + y % 10 * p;
            p *= 10;
        }
        y /= 10;
    }
    if (imp_x == imp_y)
        rez = 1;
    else
        rez = 0;
}

int main()
{
    int x, y, r;
    cin >> x >> y;
    imog(x, y, r);
    cout << r;
    return 0;
}
