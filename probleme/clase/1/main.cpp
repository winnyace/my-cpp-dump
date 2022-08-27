#include <iostream>
#include <cmath>
using namespace std;

// să se creeze o clasă numită cerc ce reține coordonatele centrului si raza. va conține două metode prin care se afișează aria si lungimea cercului.

class cerc
{
    public:
        float x, y, r;

        float aria()
        {
            return r*r * 3.141;
        }

        float lungime()
        {
            return 2*3.141 * r;
        }
};

int main()
{
    cerc c1;
    cout << "x centru = "; cin >> c1.x;
    cout << "y centru = "; cin >> c1.y;
    cout << "raza = "; cin >> c1.r;
    
    cout << "aria cercului este " << c1.aria() << endl << "lungimea cercului este " << c1.lungime();
}
