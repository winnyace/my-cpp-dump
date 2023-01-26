#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.txt");
    int n, v[10000], a, b, min = 9999, i;
    
    f >> n;
    for (i = 0; i < n; i++)
        f >> v[i];
    f >> a >> b;
    f.close();
    
    for (i = 0; i < n; i++)
        if (v[i] >= a && v[i] <= b)
            if (v[i] < min)
                min = v[i];
    if (min == 9999)
        cout << "nu";
    else
        cout << min;
}