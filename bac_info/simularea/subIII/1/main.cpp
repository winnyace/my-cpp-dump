#include <iostream>
using namespace std;

void NrImp(int x, int y, int& nr)
{
    nr = 0;
    for (int i = x; i <= y; i++)
    {
        int k = 1;
        if (i % 2 != 0)
            k++;
        for (int d = 3; d < i; d = d + 2)
        {
            if (i % d == 0)
                k++;
        }
        if (k == 3)
            nr++;
    }
}

int main()
{
    int x, y, nr;
    cin >> x >> y;
    NrImp(x, y, nr);
    cout << nr;
    return 0;
}
