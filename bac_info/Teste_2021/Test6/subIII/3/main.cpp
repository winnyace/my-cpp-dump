#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.in");
    int x, lungime_sir = 0, contor_negative = 0;
    while (f >> x)
    {
        if (x < 0 && contor_negative < 2)
            contor_negative++;
        else if (contor_negative == 2)
            lungime_sir++;
    }
    cout << lungime_sir;
}
