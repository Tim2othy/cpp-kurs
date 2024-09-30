#include <iostream>

int main ()
{
    const int zahl = 10;
    int fakultaet = 1;
    for (int zaehler = 1; zaehler <= zahl; ++zaehler)
    {
        fakultaet *= zaehler;
    }
    std::cout << zahl << " Fakualtaet ist " << fakultaet << std::endl;
    
    return 0;
}
