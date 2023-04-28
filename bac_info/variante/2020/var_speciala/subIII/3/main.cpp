#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.txt");
    int x, y = -1, k_max = 0, k = 0, h = 0;
    while (f >> x) {
        if (y == -1)
            k++;
        else {
            if (x != y) {
                if (k == x) {
                    k_max += k;
                    k = 0;
                }
                else {
                    k_max = 0;
                    k = 0;
                }
            }
            else {
                k++;
            }
        }
        y = x;
    }
    cout << k_max;
}
