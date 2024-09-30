#include <iostream>

int main ()
{
    int a = 0;
    int b = 0;
    std::cout << "Gib mir zwei Zahlen a und b: " << std::endl;
    std::cin >> a >> b;
    bool ist_groesser_50 = a + b > 50;
    std::cout << "Die Summe ist größer als 50 ist " << ist_groesser_50 << std::endl;
    // Man kann auch "or" oder "not" benutzen
    bool im_interval = ist_groesser_50 and (a + b <= 100);
    std::cout << "Im_Interval ist " << im_interval << std::endl;
    return 0;
}
