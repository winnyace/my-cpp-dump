#include <iostream>
using namespace std;


struct figura
{
    int diametru;
    struct 
    {
        int x, y;    
    } centru;
} c;

int main()
{
    cin >> c.centru.x >> c.centru.y >> c.diametru;
    cout << c.centru.x << " " <<c.centru.y << endl << c.diametru;
}
