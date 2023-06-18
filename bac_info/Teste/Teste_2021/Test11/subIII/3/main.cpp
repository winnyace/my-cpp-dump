#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream f("bac.out");
    int x, y, n, nou;
    do {
        cout << "x si y (x < y): "; cin >> x >> y;
    }while (!(x < y));
    f << y << " " << x << " ";
    n = ((y - x) / 2) - 1;
    while (n != 0)
    {
        nou = x - 2 * n;
        f << nou << " ";
        x = nou;
        n--;
    }
    return 0;
}
