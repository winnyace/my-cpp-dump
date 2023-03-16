// Un joc online cu n jetoane poate fi jucat de un grup de k (k≥2) jucători, numai dacă toate cele n jetoane
// pot fi distribuite în mod egal celor k jucători.
// Subprogramul joc are un singur parametru, n, prin care primește un număr natural (n e [2,10^4]),
// reprezentând numărul de jetoane ale unui joc de tipul precizat. Subprogramul returnează numărul
// valorilor distincte pe care le poate avea k pentru acest joc.
// Scrieți definiția completă a subprogramului.
// Exemplu: dacă n=12, atunci subprogramul returnează numărul 5 (cele 12 jetoane se pot distribui în
// mod egal pentru o grupă de 2 jucători, de 3 jucători, de 4 jucători, de 6 jucători sau de 12 jucători).

#include <iostream>
using namespace std;

int joc(int n)
{
    int k, con = 0;
    for (k = 2; k <= n; k++)
        if (n%k == 0)
            con++;
    return con;
}

int main() 
{
    int n;
    cin >> n;
    cout << joc(n);
}
