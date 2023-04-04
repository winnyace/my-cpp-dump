#include <iostream>
#include <fstream>
using namespace std;

// a. Vom merge prin fișier și vom face maxul pentru numerele citite, în timp ce creștem un contor pentru poziția pe care suntem acum. La final, vom ține minte valorea tocmai procesată. Ne va trebui mai târziu.
// Dacă găsim noul nostru max, schimbăm maxul precedent și afișa poziția pe care se alfă acest max.
// Dacă găsim un max similar cu altul din spate, vom întreba dacă ultimul număr procesat este un număr diferit de max. Dacă este, vom afișa poziția. Astfel, nu vom afișa nimic.
// Algoritmul meu este eficient din toate punctele de vedere deoarece nu folosc un vector, merg doar odată printre cifrele din fișier, având doar 4 variabile folosite în total. Timpul de procesare este mult mai mic folosind orice altceva. Două if-uri consider că este minimul necesar pentru a rezolva problema corect.

// b.
int main()
{
    ifstream f("bac.txt");
    int x, max = -1, precedent_x, i = 0;
    while (f >> x)
    {
        i++;
        if (x > max)
        {
            cout << i << " ";
            max = x;
        }
        else if (max == x && precedent_x != x)
            cout << i << " ";
        precedent_x = x;
    }
    f.close();
    return 0;
}
