#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream f("bac.out");
    int x, y, n, num;
    do
    {
        cin >> y >> x;
    } while ( !(y > x) );
    n = ( (y-x)/2 ) - 1;
    f << y << " " << x << " ";
    while (n != 0)
    {
        num = x - 2*n;
        f << num << " ";
        x = num;
        n--;
    }
    f.close();
    return 0;
}