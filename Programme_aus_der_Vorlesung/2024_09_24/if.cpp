#include <iostream>

int main ()
{
    int a = 0;
    int b = 0;
    std::cout << "Gib mir zwei Zahlen a und b: " << std::endl;
    std::cin >> a >> b;
    bool ist_groesser_50 = a + b > 50;
    std::cout << "Die Summe ist größer als 50 ist " << ist_groesser_50 <<std::endl;
    // Man kann auch "or" oder "not"
    bool im_interval = ist_groesser_50 and (a + b <= 100);
    if (im_interval)
    {
        std::cout << "Im Interval ist wahr" << std::endl;
    }
    else
    {
        int c = 0;
        std::cin >> c;
        std::cout << "Im Interval ist falsch und c ist" << c << std::endl;
    }
    bool nicht_im_interval = not im_interval;
    std::cout << "Das Gegenteil von im_interval ist " << nicht_im_interval << std::endl;
    return 0;
}
