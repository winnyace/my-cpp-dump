#include <iostream>
using namespace std;

struct fractie
{
    int a, b;
} f, fs;

int main()
{
    f.a = 2021; f.b = 2022;
    fs.a = f.a - 2020;
    fs.b = f.b * 2021 - 2021 * f.b;
    cout << fs.a << "\n" << fs.b;
    return 0;
}
