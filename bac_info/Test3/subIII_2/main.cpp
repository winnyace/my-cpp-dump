// Scrieţi un program C/C++ care citeşte de la tastatură un număr natural, n (n∈[2,20]), şi construieşte
// în memorie un tablou bidimensional cu n linii şi n coloane, având proprietăţile:
// • toate elementele situate pe diagonala secundară sunt nule;
// • fiecare linie conţine, începând cu diagonala secundară, de la dreapta la stânga, un şir strict crescător
// de numere consecutive, iar începând cu diagonala secundară, de la stânga la dreapta, tot un şir strict
// crescător de numere consecutive

#include <iostream>
using namespace std;

int main()
{
    int n, a[20][20], i, j;
    cin >> n;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
        {
            if (i+j == n+1)
                a[i][j] = 0;
            else if (i+j < n+1)
                a[i][j] = (n+1) - (i+j);
            else if (i+j > n+1)
                a[i][j] = a[i][j-1] + 1;
        }      
    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}