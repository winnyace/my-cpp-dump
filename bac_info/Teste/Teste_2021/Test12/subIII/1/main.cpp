#include <iostream>
using namespace std;

void frate(int x, int& y)
{
    int p = 1;
    y = 0;
    while (x != 0) {
        if (x % 10 == 9) {
            y = -1;
            break;
        }
        else
            y = y + (x % 10 + 1) * p;
        p *= 10; 
        x /= 10;
    }
}

int main()
{
    int x, y;
    cin >> x;
    frate(x, y);
    cout << y;
}