#include <iostream>

int main ()
{
    const int zahl = 2000;
    int zweierpotenz = 1;
    while (zweierpotenz <= zahl)
    {
        zweierpotenz *= 2;
    }
    std::cout << "Kleinste Zweierpotenz groesser als " << zahl << " ist " << zweierpotenz << std::endl;
    
    return 0;
}
