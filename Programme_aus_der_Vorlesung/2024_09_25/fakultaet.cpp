#include <iostream>

void gruesse (int n)
{
    std::cout << n << " Gruesse" << std::endl;
    return; // muss nicht unbedingt da sein, wenn der Rueckgabetyp void ist
}

int fakultaet (int zahl)
{
    int fakultaet = 1;
    for (int zaehler = 1; zaehler <= zahl; ++zaehler)
    {
        if (fakultaet > 2000000000 / zahl)
        {
            std::cout << "Fehler: Fakultaet ist zu gross für int" << std::endl;
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

int main ()
{
    gruesse(binomialkoeffizient(5, 3));
    const int zahl = 10;
    int zahl_fakultaet = fakultaet(zahl);
   
    std::cout << zahl << " Fakualtaet ist " << zahl_fakultaet << std::endl;
    std::cout << "8 Fakultaet ist " << fakultaet(8) << std::endl;
    return 0;
}
