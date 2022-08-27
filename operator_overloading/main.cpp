#include <iostream>
using namespace std;

struct test
{
    int x, y;

    test() : x(0), y(0) {} // avem un simplu constructor aici.
    test(int num1, int num2) : x(num1), y(num2) {} // iar cel de al doilea constructor este folosit mai jos.
    
    test operator + (const test& dr) // putem defini cum un anumit operator poate funcționa asupra unei structuri sau clase.
    // numele_structuri operator operatorul_matematic_dorit (referință_către_membrul_2_al_operației_matematice)
    {
        return test(this->x + dr.x, this->y + dr.y); 
        // aici este folosit cel de al doilea constructor. this->x/this->y reprezintă un pointer către acestă structura.
        // dr este referința către al doilea membru al operației matematice.
    }
};

int main()
{
    test t1(1, 2), t2(3, 4);
    cout << t1.x << " " << t1.y << endl << t2.x << " " << t2.y << endl;

    t1 = t1 + t2; // aici folosim operatorul + pentru a aduna două structuri.
    cout << "resultat final: " << t1.x << " " << t1.y;
    return 0;
}
