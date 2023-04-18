#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.txt");
    int x, anterior_x = -1, varf = -1;
    while (f >> x)
    {
        if (x > varf)
        {
            varf = x;
            cout << x << " ";
        }
        anterior_x = x;
    }
    f.close();
    return 0;
}
