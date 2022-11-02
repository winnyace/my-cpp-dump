#include <iostream>
using namespace std;

int DoiTrei(int n)
{
    while (n > 0)
    {
        if (n%10 != 2)
            if (n%10 != 3)
                return 0;
        n /= 10;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    cout << DoiTrei(n);
}