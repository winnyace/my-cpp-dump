#include <iostream>
using namespace std;

struct punct
{
    float x, y;
};

struct cerc
{
    punct centru;
    float raza;
} fig;

int main()
{
    fig.raza = 1;
    fig.centru.x = 0;
    fig.centru.y = 0;
    cout << "centrul cercului: " << fig.centru.x << " " << fig.centru.y << endl << "raza cercului: " << fig.raza;
    return 0;
}
