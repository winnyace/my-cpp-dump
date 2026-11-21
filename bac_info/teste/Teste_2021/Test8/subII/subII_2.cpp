#include <iostream>
using namespace std;

struct clasa
{
    int numar;
    struct 
    {
        float sem1, sem2;
    } elev[40];
} p;

int main()
{
    p.numar = 2;
    p.elev[0].sem1 = 10;
    p.elev[0].sem2 = 9.5;
    cout << p.numar << endl << p.elev[0].sem1 << " " << p.elev[0].sem2;
}
