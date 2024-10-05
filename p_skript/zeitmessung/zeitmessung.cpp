#include <iostream>
#include <ctime>

int main()
{
    clock_t startzeit, endzeit;
    long differenz;

    startzeit = clock(); // Zeitmessung 1

    long a = 6;

    for (int i = 0; i < 100000000; ++i)
    {
        a += (i);
    }

    endzeit = clock(); // Zeitmessung 2

    differenz = endzeit - startzeit; // Zeitdifferenz zwischen den beiden Messungen

    std::cout << "Differenz: " << differenz << std::endl;

    std::cout << "Zeit in Sekunden: " << static_cast<double>(differenz) / CLOCKS_PER_SEC << std::endl;

    std::cout << a << std::endl;
}