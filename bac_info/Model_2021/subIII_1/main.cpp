// Subprogramul prime are trei parametri: 
// •  n, prin care primește un număr natural (n ∈ [4,10^9]); 
// •  x și y, prin care furnizează cele mai mari două numere prime din intervalul [1,n), x<y. 
// Scrieți definiția completă a subprogramului. 
// Exemplu: dacă n=49, în urma apelului x=43, y=47. 

#include <iostream>
using namespace std;

bool eprim(int num)
{
    bool prim = true;
    for (int d = 2; d <= num/2 && prim == true; d++)
        if (num%d == 0)
            prim = false;
    return prim;
}

void prime(int n, int &x, int &y)
{
    y = n-1;
    while (true)
    {
        if (eprim(y) == true)
            break;
        else
            y--;
    }
    x = y-1;
    while (true)
    {
        if (eprim(x) == true)
            break;
        else
            x--;
    }
}

int main()
{
    int n, x, y;
    cin >> n;
    prime(n, x, y);
    cout << x << " " << y;
}