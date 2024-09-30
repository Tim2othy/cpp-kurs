#include <iostream>

int fakultaet (int zahl); // Funktionsdeklaration

int main ()
{
    std::cout << " Fakualtaet ist " << fakultaet(10)
        << std::endl;
    return 0;
}

int fakultet (int zahl) // Funktionsdefinition
{
    if (zahl == 0)
    {
        return 1;
    }
    return fakultaet(zahl - 1) * zahl; // rekursiver Funktionsaufruf
}
