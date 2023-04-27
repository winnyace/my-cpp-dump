#include <iostream>
using namespace std;

struct punct {
    int x, y;
} p;

struct cerc {
    punct centru;
    float raza;
} c;

int main() {
    p.x = 5;
    p.y = 2;
    c.centru.x = 5;
    c.centru.y = 2;
    c.raza = 10;
    cout << (p.x == c.centru.x && p.y == c.centru.y);
    return 0;
}
