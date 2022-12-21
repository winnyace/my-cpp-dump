#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.in");
    int num, con = 0, con_max;
    bool prim_poz_gasit = false;
    while (f >> num)
    {
        if (num > 0 && prim_poz_gasit == false)
        {
            prim_poz_gasit = true;
            con_max = con;
            con = 1;
        }
        else if (num < 0 || num > 0)
            con++;
    }
    if (con > con_max)
        con_max = con;
    cout << con_max;
}