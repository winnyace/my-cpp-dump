// Subprogramul factori are doi parametri, n şi m, prin care primește câte un număr natural din intervalul
// [1,109]. Subprogramul returnează numărul valorilor prime care se regăsesc atât în descompunerea în
// factori primi a lui n, cât și în descompunerea în factori primi a lui m.
// Scrieți definiția completă a subprogramului.
// Exemplu: dacă n=750 şi m=490, atunci subprogramul returnează 2 (750=2*3*5^3, 490=2*5*7^2).

#include <iostream>
using namespace std;

int factori(int n, int m)
{
    int div = 2, pn, pm, conFacCom = 0;
    while (n > 1 && m > 1)
    {
        pn = 0; pm = 0;
        while (n%div == 0)
        {
            n /= div;
            pn++;
        }
        while (m%div == 0)
        {
            m /= div;
            pm++;
        }
        if (pn != 0 && pm != 0)
            conFacCom++;
        div++;
    }
    return conFacCom;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << factori(num1, num2);
}