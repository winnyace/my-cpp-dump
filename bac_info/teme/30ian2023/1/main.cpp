#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.txt");
    int num, frec[9] = {0}, i;
    
    while (f >> num)
    {
        if (num%2 == 0)
            frec[num]++;
    }
    for (i = 0; i <= 9; i = i + 2)
        if (frec[i] != 0)
            while (frec[i] != 0)
            {
                cout << i << " ";
                frec[i]--;
            }
    f.close();
    return 0;
}
