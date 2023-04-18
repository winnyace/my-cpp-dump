#include <iostream>
using namespace std;

struct punct
{
    float x, y;
};

struct cerc
{
    struct punct centru;
    float raza;
} fig;

int main()
{
    fig.raza = 1;
    fig.centru.x = 0;
    fig.centru.y = 0;
    cout << "Raza cercului: " << fig.raza << endl << "Centru are coordonatele la (" << fig.centru.x << ", " << fig.centru.y << ").";
    return 0;
}
