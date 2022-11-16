// o matrice. liniile reprezinta numere binare. citeste matricea si transforma numerul binar intr-un numar in baza a 10a

#include <iostream>
using namespace std;

int main()
{
    int n, a[11][11], num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i << " " << j << ": "; cin >> a[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    
    for (int i = 0; i < n; i++)
    {
        num = 0;
        for (int j = 0; j < n; j++)
            num = num * 2 + a[i][j];
        cout << num << " ";
    }
}
