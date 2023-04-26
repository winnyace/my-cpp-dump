#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.in");
    int x, fr[1000] = {0}, con = 0;
    bool e_palindromic = true;
    while (f >> x)
        fr[x]++;
    for (int i = 1; i <= 1000 && e_palindromic == true; i++)
        if (fr[i] % 2 != 0) {
            if (con == 0)
                con++;
            else
                e_palindromic = false;
        }
    if (e_palindromic)
        cout << "DA";
    else
        cout << "NU";
}
