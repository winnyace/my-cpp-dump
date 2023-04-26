#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.txt");
    int x;
    bool sw = false;
    while (f >> x)
    {
        if (x % 2 == 0)
        {
            sw = true;
            cout << x << " ";
        }
    }
    if (sw == false)
        cout << "nu exista";
    f.close();
    return 0;
}
