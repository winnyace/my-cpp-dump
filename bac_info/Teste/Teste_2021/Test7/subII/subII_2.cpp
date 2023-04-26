#include <iostream>
using namespace std;

struct data
{
    int zi, luna, an;
} dataEveniment;

struct elev
{
    char nume[30];
    data dataNasterii;
} e;

int main()
{
    dataEveniment.an = 4;
    dataEveniment.luna = 3;
    dataEveniment.zi = 2;

    e.dataNasterii.an = 4;
    e.dataNasterii.luna = 3;
    e.dataNasterii.zi = 3;
    
    if (e.dataNasterii.an > dataEveniment.an)
        cout << "ulterior";
    else if (e.dataNasterii.an == dataEveniment.an)
    {
        if (e.dataNasterii.luna > dataEveniment.luna)
            cout << "ulterior";
        else if (e.dataNasterii.luna == dataEveniment.luna)
            if (e.dataNasterii.zi > dataEveniment.zi)
                cout << "ulterior";
    }
    return 0;
}

