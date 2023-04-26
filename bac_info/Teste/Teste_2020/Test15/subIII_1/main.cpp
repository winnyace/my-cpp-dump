// Subprogramul divPrimMax are doi parametri: 
// •  n, prin care primește un număr natural (n e [2,10^9]); 
// •  p, prin care furnizează cel mai mare divizor prim al lui n. 
// Scrieți definiția completă a subprogramului. 
// Exemplu: dacă n=2000, în urma apelului p=5, deoarece 2000=2^4 * 5^3

#include <iostream>
#include <climits>
using namespace std;

void divPrimMax(int n, int& p)
{
    int d = 2, pu;
    p = INT_MIN;
    while (n > 1)
    {
        pu = 0;
        while (n%d == 0)
        {
            n /= d;
            pu++;
        }
        if (pu > 0)
            if (p < d)
                p = d;
        d++;
    }
}

int main()
{
    int n, p;
    cin >> n;
    divPrimMax(n, p);
    cout << p;
    return 0;
}