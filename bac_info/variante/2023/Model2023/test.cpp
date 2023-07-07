#include <iostream>

int main()
{
    int m = 10, n = 15, p = 2, q = 70, s = 0;
    for (int x = p; x <= 70; x++) {
        if (x % m == 0|| x % n == 0) {
            s += x;
            std::cout << x << " ";
        }
        if (x % m == 0 && x % n == 0) {
            s -= x;
            std::cout << "-" << x << " ";
        }
    }
    std::cout << std::endl << s;
}
