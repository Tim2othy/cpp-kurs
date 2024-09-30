#include <iostream>

int main ()
{
    const int zahl = 10;
    int zweierpotenz = 1;
    for (int zaehler = 0; zaehler < 10; ++zaehler)
    {
        zweierpotenz *= 2;
        std::cout << "Zaehler ist jetzt " << zaehler << std::endl;
    }
    std::cout << zahl << "te Zweierpotenz ist " << zweierpotenz << std::endl;
    
    return 0;
}
