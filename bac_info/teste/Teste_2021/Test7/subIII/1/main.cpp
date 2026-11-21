#include <iostream>
using namespace std;

void afisare(int x, int y, int k)
{
    int contor = 1, i = x;
    bool sw;
    if ( (y - x + 1) % k == 0)
        sw = true;
    while (i <= y)
    {
        if (contor != k)
        {
            cout << i << " ";
            contor++;
        }
        else
        {
            cout << i << " * ";
            contor = 1;
        }
        i++;
    }
    if (sw == false)
        cout << "*";
}

int main()
{
    int x, y, k;
    cin >> x >> y >> k;
    afisare(x, y, k);
}
