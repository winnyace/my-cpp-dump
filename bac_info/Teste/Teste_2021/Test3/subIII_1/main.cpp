// Subprogramul suma are un singur parametru, n, prin care primește un număr natural (n[1,106]).
// Subprogramul returnează suma divizorilor pozitivi ai lui n care nu sunt primi.
// Scrieți definiția completă a subprogramului.
// Exemplu: pentru n=12 subprogramul returnează 23 (23=1+4+6+12). 

#include <iostream>
using namespace std;

bool verificare_prim(int num)
{
    bool eprim = false;
    for (int d = 2; d <= num/2 && eprim == false; d++)
        if (num%d == 0)
            eprim = true;
    return eprim;
}

int suma(int n)
{
    int sum = 0;
    sum += 1;
    for (int i = 2; i <= n; i++)
        if (n%i == 0)
        {
            bool sw = verificare_prim(i);
            if (sw == true)
                sum += i;
        }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << suma(n);
    return 0;
}
