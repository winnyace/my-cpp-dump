#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("numere.txt");
    int x, cifre[10] = {0};
    unsigned long long num = 0;
    while (f >> x)
    {
        while (x != 0)
        {
            int c = x % 10;
            cifre[c]++;
            x /= 10;
        }
    }
    for (int i = 9; i >= 0; i--)
    {
        if (cifre[i] != 0)
            while (cifre[i] != 0)
            {
                num = num * 10 + i;
                cifre[i]--;
            }
    }
    cout << num;
}
