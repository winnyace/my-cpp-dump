// functie numita patrat. un singur parametru, n, numar intreg. returneaza cel mai mare patrat perfect care este si divizor al lui n

#include <iostream>
#include <cmath>
using namespace std;

int patrat(int n)
{
    int d, num;
    for (d = 2; d <= n/2; d++)
        if (n%d == 0 && d == sqrt(d) * sqrt(d))
            num = d;
    return num;
}

int main()
{
    int n;
    cin >> n;
    cout << patrat(n);
}
