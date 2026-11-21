#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.txt");
    int x, nr_impare[2] = {0}, con = 0;
    while (f >> x)
    {
        if (x % 2 != 0)
        {
            if (con == 0)
            {
                nr_impare[0] = x;
                con++;
            }
            else if (con == 1)
            {
                nr_impare[1] = x;
                con++;
            }
            else if (con == 2)
            {
                nr_impare[0] = x;
                con = 1;
            }
        }
    }
    cout << nr_impare[0] << " " << nr_impare[1];
}
