// https://www.codeabbey.com/index/task_view/rounding
// input data:
// 3
// 12 8
// 11 -3
// 400 5
// answer:
// 2 -4 80

#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    float x, y, r, frac;
    cin >> x >> y;
    r = x / y;
    frac = r - int(r);
    if (frac >= 0.5)
        r += float(0.5);
    else if (frac <= -0.5)
        r -= float(0.5);
    cout << int(r);
}
