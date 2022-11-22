#include <iostream>
using namespace std;

void divprim(int n, int& k, int v[])
{
    int d;
    for (d = 2; d <= n/2; d++)
        if (n%d == 0)
            break;
    
    bool e_vec = false;
    int st = 0, dr = k;
    while (st <= dr)
    {
        int mij = (st+dr) / 2;
        if (v[mij] == d)
        {
            cout << "este in vector.\n";
            e_vec = true;
            break;
        }
        else
            if (v[mij] > d)
                dr = mij - 1;
            else if (v[mij] < d)
                st = mij + 1;
    }

    if (e_vec == false)
    {
        int poz;
        for (int i = 0; i < k; i++)
            if (d >= v[i] && d <= v[i+1])
                poz = i+1;
        k++;
        for (int i = k-1; i >= poz; i--)
            v[i] = v[i-1];
        v[poz] = d;
        for (int i = 0; i < k; i++)
            cout << v[i] << " ";
    }
}

int main()
{
    int n, k, v[100];
    do 
    {
        cout << "n = "; cin >> n;
    } while ( !(n >= 1 && n <= 99999) );
    cout << "k = "; cin >> k;
    for (int i = 0; i < k; i++)
    {
        cout << "v[" << i+1 << "] = "; cin >> v[i];
    }
    divprim(n, k, v);
    return 0;
}