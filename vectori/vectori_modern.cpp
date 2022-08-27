#include <iostream>
#include <array> // acestă librărie ne oferă o interfață similară cu un container.
using namespace std;

int main()
{
    array<int, 5> v; // prima dată tipul de date stocate în vector, după aceia o constantă numerică.
    for (auto& i : v) { // auto este un keyword in C++ ce scurtează multă sintaxă pentru noi uneori.
        cout << "elementul de pe pozitia " << i << " = "; cin >> i; // i este un pointer aici.
    } // auto scurtează aici definiția lui i ca și un iterator care merge de la începului lui v până la sfârșit.

    for (auto& i : v)
        cout << i << " ";
    /* acestă este varianta modernă de a folosi un vecotr în C++, oferind multe avantaje.
     * avem o formă de error checking pentru indexarea elementelor din vector.
     * pentru că este un container, multe funcții din librăria <algorithm> sunt disponibile acum, sporind efficienta noastra.
     * documentație (engleză): http://cplusplus.com/reference/array/array/ */
}
