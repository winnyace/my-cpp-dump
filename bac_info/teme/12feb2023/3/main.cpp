#include <iostream>
#include <climits>
#include <fstream>
using namespace std;

void p(int a[], int k, int& max)
{
    max = INT_MIN;
    for (int i = 0; i < k; i++)
        if (a[i] > max)
            max = a[i];
}

int main()
{
    ifstream f("valori");
    int a[101], k, max, i = 0;
    cin >> k;
    while ( !(f.eof()) )
    {
        f >> a[i];
        i++;
    }
    p(a, k, max);
    cout << max;
}