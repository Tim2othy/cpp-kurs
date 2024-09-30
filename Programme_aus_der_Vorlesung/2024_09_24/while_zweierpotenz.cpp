#include <iostream>

int main ()
{
    const int zahl = 10;
    int zweierpotenz = 1;
    int zaehler = 0;
    while (zaehler < zahl)
    {
        zweierpotenz *= 2;
        ++zaehler;
    }
    std::cout << zahl << "te Zweierpotenz ist " << zweierpotenz << std::endl;
    
    return 0;
}
