#include <iostream>
#include <cstdlib> // acest library adauga niste functii din c de care avem nevoie.
using namespace std;

int main()
{
	srand(0); //merge orice unsigned val.
	cout << rand()%20 << endl; // asa putem crea un nr random. care din nou nu e random, e doar un rand() cu o val speciala.
	return 0;
}
