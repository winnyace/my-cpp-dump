#include <iostream>
using namespace std;

void imog(int x, int y, int &rez)
{
    int num_x = 0, num_y = 0, aux = 0;
    while (x != 0)
    {
        if (x%10 % 2 != 0)
            num_x = num_x * 10 + x%10;
        x /= 10;
    }
    while (y != 0)
    {
        if (y%10 % 2 != 0)
            num_y = num_y * 10 + y%10;
        y /= 10;
    }
    if (num_x == num_y)
        rez = 0;
    else
    {
        while (num_y != 0)
        {
            aux = aux * 10 + num_y%10;
            num_y /= 10;
        }
        if (num_x == aux)
            rez = 1;
        else
            rez = 0;
    }
}

int main()
{
    int x, y, r;
    cin >> x >> y;
    imog(x, y, r);
    cout << r;
    return 0;
}