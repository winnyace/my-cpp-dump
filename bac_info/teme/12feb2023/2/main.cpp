#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream f("patrate.txt");
    int n, suma = 0, pos, num = 1;
    cin >> n;
    while (num*num < n)
    {
        f << num*num << "+";
        suma += num*num;
        num++;
    }
    pos = f.tellp();
    f.seekp(pos-1);
    f.write("=", 1);
    f << suma;
    f.close();
    return 0;
}