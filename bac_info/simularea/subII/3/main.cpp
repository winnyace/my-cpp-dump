#include <iostream>
using namespace std;

int main()
{
    int i, j, a[10][10] = {};
    for (i = 1; i <= 5; i++)
        for (j = 1; j <= 5; j++)
        {
            if (i+j == 6)
                a[i][j] = 5- j;
            else
                if (i+j > 5)
                    a[i][j] = a[i][j-1];
                else
                    a[i][j] = a[5+1-j][5+1-i]; 
        }
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
