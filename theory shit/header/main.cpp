#include <iostream>
#include "main.h" // așa definim un fișier de tip header.

/* pentru a compila cu un fișier de acest tip, este necesar să specificăm fișierul.
 * am decis să folosc CMake pentru a crea fișierul compilat. */

int main() {
    salut(); // salut e definit în main.h
    return 0;
}