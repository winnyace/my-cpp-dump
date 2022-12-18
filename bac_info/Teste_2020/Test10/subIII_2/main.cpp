/*
Într-un text cu cel mult 102 caractere cuvintele sunt formate din litere mici ale alfabetului englez și sunt
separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
menționat, pe care îl modifică în memorie, inserând cuvântul succes între oricare două cuvinte ale sale
care se termină cu aceeași literă. Cuvântul inserat este separat prin câte un spațiu de cuvintele vecine.
Textul transformat este afișat pe ecran, iar dacă nu există perechi de astfel de cuvinte, se afișează pe
ecran mesajul nu exista.
Exemplu: dacă textul citit este testez validez utilizez date corecte acum
se obține textul testez succes validez succes utilizez date succes corecte acum 
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101], *cuv, *cuv_ant, c, rez[101] = {0};
    bool primul = false;
    cin.get(s, 101);
    cuv_ant = strtok(s, " ");
    c = cuv_ant[strlen(cuv_ant)-1];
    cuv = strtok(NULL, " ");
    while (cuv != NULL)
    {
        if (c == cuv[strlen(cuv)-1] && primul == false)
        {
            primul = true;
            strcat(rez, cuv_ant);
            strcat(rez, " succes ");
            strcat(rez, cuv);
            strcat(rez, " ");
        }
        else if (c == cuv[strlen(cuv)-1] && primul == true)
        {
            strcat(rez, "succes ");
            strcat(rez, cuv);
            strcat(rez, " ");
        }
        else
        {
            c = cuv[strlen(cuv)-1];
            strcat(rez, cuv);
            strcat(rez,  " ");
        }
        cuv_ant = cuv;
        cuv = strtok(NULL, " "); 
    }
    if (primul == false)
        cout << "nu exista";
    else
    {
        rez[strlen(rez)] = '\0';
        strcpy(s, rez);
        cout << s;
    }
    return 0;
}
