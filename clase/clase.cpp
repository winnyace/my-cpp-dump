#include <iostream>
#include <string>
using namespace std;

// printr-o clasă definim putem defini un nou tip, similar cu tipul înregistrare, doar că cu o clasă, avem posibilitatea creerei unor funcții, numite metode, în clasa respectivă.
// cu ajutorul claselor, putem defini un obiect din viața reală în cod.
// o să construiesc o clasă numită elev.
class elev 
{
    public: // public este un modificator.
        string nume;
        int varsta;

        void prezentare()
        {
            cout << "salut! eu sunt " << nume << " si am " << varsta << " ani.";
        }
};

int main()
{
    elev e;
    e.nume = "Ion";
    e.varsta = 17;
    e.prezentare();
}
