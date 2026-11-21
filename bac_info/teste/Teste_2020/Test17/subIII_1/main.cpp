// Subprogramul maxim are un singur parametru, n, prin care primește un număr natural (n e [0,10^9]).
// Subprogramul returnează cea mai mare cifră impară din scrierea acestuia, sau -1 dacă nu există astfel
// de cifre. Scrieți definiția completă a subprogramului.
// Exemplu: dacă n=5672883, subprogramul returnează 7

#include <iostream>
#include <climits>
using namespace std;

int maxim(int n)
{
    int max = INT_MIN;
    while (n != 0)
    {
        if (n%10 % 2 != 0 && max < n%10)
            max = n%10;
        n /= 10;
    }
    if (max != INT_MIN)
        return max;
    else
        return -1;
}

int main()
{
    int n;
    cin >> n;
    cout << maxim(n);
    return 0;
}
