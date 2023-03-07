#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("numere10.in");
    float x, precedent_x = -1;
    int n, con = 0;
    
    f >> n;
    while (f >> x)
    {
        if (precedent_x != x)
        {
            precedent_x = x;
            con++;
        }
    }
    cout << con;
    return 0;
}
