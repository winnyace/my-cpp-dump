#include <iostream>
#include <cstdlib> // acest library adauga niste functii din c de care avem nevoie.
#include <ctime> //acest library adauga abilitatea de a citi timpul din 1.1.1970 pana acum.

using namespace std;

int main()
{
	srand(time(0));
	cout << rand()%20 << endl; // asa putem crea un nr random. cu adevarat unul. folosind time() putem crea un A rng.
	// daca facem o operatie de mod asupra functii rand() cu un numar, va limita ce numere vor fi create.
	return 0;
}
