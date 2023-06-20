#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.txt");
    int x, numar_secvente = 0, max = 0, ult_x, k = 0;
    f >> ult_x; k++;
    while (f >> x) {
        if (x % 2 != ult_x % 2) {
            if (k > max) {
                max = k;
                numar_secvente = 1;
            }
            else if (k == max)
                numar_secvente++;
            k = 1;
        }
        else
            k++;
        ult_x = x;
    }
    if (k == max)
        numar_secvente++;
    cout << numar_secvente << " " << max;
}
