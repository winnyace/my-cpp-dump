#include <iostream>
using namespace std;

int main()
{
    int num10, baza, num = 0, pos = 1;
    cout << "dati un numar in baza 10: "; cin >> num10;
    cout << "dati o baza: "; cin >> baza;

    cout << "numarul " << num10 << " din baza 10, transformat în baza " << baza << " este: ";
    while (num10 != 0) 
    {
        num = num + pos * (num10 % baza);
        num10 /= baza;
        pos *= 10; 
    }
    cout << num;
    return 0;
}
