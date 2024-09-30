#include <iostream>
#include "kombinatorik.h"

void gruesse (int n)
{
    std::cout << n << " Gruesse" << std::endl;
    return; // muss nicht unbedingt da sein
}

int main ()
{
    gruesse(binomialkoeffizient(5, 3));
    const int zahl = 10;
    int zahl_fakultaet = fakultaet(zahl);
   
    std::cout << zahl << " Fakualtaet ist " << zahl_fakultaet 
        << std::endl;
    std::cout << "8 Fakultaet ist " << fakultaet(8) << std::endl;
    return 0;
}
