#include <iostream>
#include <string>
using namespace std;

// <string> este bazată pe funcțiile dintr-un container, adică o structură de date omogenă controlată automat de compilator.
// <string> include toate funcțiile din <cstring>, într-o manieră sau alta.
// documentație (engleză): https://www.cplusplus.com/reference/string/string/

int main()
{
	// definire, citire si afisare.
	string str1;
	getline(cin, str1); // citirea se face cu getline(funcția_citire, șirul)
	cout << "sirul introdus este '" << str1 << "'." << endl;

    // pentru a arată lungimea unui șir, folosim sir.size() sau sir.length()
    cout << "lungimea sirului introdus este de " << str1.size() << " caractere.\n";

    // pentru a concatena un șir, folosim fie sir_dest.append(sir_cat), fie sir_dest += sir_cat 
    string strCat1 = "Kurashina", strCat2 = " Asuka";
    cout << "\nsirul initial este '" << strCat1 << "'.\n";
    strCat1.append(strCat2);
    cout << "sirul dupa concatenare este '" << strCat1 << "'.\n";

    // pentru a copia un șir, folosim tot sir_dest.append(sir_cpy)
    string strCpy1 = "strCpy1", strCpy2;
    strCpy2.append(strCpy1);
    cout << "\nstrcpy1 este '" << strCpy1 << "'." << "\nstrcpy2 este '" << strCpy2 << "'.\n";

    // pentru a compara două șiruri, folosim str1.compare(str2)
    // returnează 0 dacă sunt egale... 
    // ...<0 dacă primul caracter < sirul comparat sau dacă sirul are toate caracterele dar este mai mic decât sirul comparat...
    // ...>0 dacă primul caracter > sirul comparat sau dacă sirul are toate caracterele dar este mai mare decât sirul comparat.
    string strComp1, strComp2;
    cout << "\ndati primul sir pentru compare: "; getline(cin, strComp1);
    cout << "dati al doilea sir pentru compare: "; getline(cin, strComp2);
    cout << "\nprimul sir este '" << strComp1 << "'.\n" << "al doilea sir este '" << strComp2 << "'.\n";
    if (strComp1.compare(strComp2) == 0)
        cout << "sirurile sunt la fel.\n";
    else
        cout << "sirurile nu sunt la fel.\n";

    // pentru a gasi un caracter într-un sir, folosim sir.find(caracter)
    // va returna pozitia pe care se găsește caracterul dorit, dacă există, altfel va returna string::npos, ce indică că nu a fost găsit caracterul.
    string strFind; 
    char c;
    cout << "\nintroduceti un sir: "; getline(cin, strFind); 
    cout << "introduceti un caracter: "; cin >> c;
    if (strFind.find(c) != string::npos)
        cout << "a fost gasit caracterul.";
    else
        cout << "nu a fost gasit caracterul.";
	return 0;
}
