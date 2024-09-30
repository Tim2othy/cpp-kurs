#include <iostream>
#include "kombinatorik.h"

int fakultaet (int zahl)
{
    int fakultaet = 1;
    for (int zaehler = 1; zaehler <= zahl; ++zaehler)
    {
        if (fakultaet > 2000000000 / zahl)
        {
            std::cout << "Fehler: Fakultaet ist zu gross für int" 
                << std::endl;
            return -1;
            // continue;
        }
        fakultaet *= zaehler;
    }
    return fakultaet;
}

int binomialkoeffizient (int n, int k)
{
    return fakultaet(n) / (fakultaet(k) * fakultaet(n - k));
}
