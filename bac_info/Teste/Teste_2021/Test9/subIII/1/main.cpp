#include <iostream>
using namespace std;

void divizor(int a, int b, int k, int& nr)
{
    nr = 0;
    for (int i = a; i <= b; i++)
        if (i % 10 == k && i % k == 0)
            nr++;
}

int main()
{
    int a, b, k, nr;
    cin >> a >> b >> k;
    divizor(a, b, k, nr);
    cout << nr;
    return 0;
}
