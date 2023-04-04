#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.txt");
    int x, y, n, pen_n = -1, k = 0;
    f >> x >> y;
    while (f >> n)
    {
        if (n >= x && n <= y && n != pen_n)
            k++;
        pen_n = n;
    }
    cout << k;
}
