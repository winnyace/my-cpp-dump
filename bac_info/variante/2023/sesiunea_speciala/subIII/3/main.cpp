#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;

int main()
{
    ifstream f("bac.in");
    int x, interval_min, interval_max, min, max, k = 0;
    bool sw = false;
    f >> x;
    interval_max = interval_min = x;
    min = INT_MAX; max = INT_MIN;
    k++;
    while (f >> x) {
        sw = false;
        k++;
        if (x > interval_max) {
            sw = true;
            interval_max = x;
        }
        if (x < interval_min) {
            sw = true;
            interval_min = x;
        }
        if (sw == false) {
            if (k > max)
                max = k;
            if (k < min)
                min = k;
        }
    }
    cout << min << " " << max;
}
