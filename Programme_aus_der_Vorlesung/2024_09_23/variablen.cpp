#include <iostream>

int main ()
{
    int a = 37;
    double b = 42;
    const double pi = 3.14;
    int d = 20 * a;
    int e = d + a;
    // b ist meine Variable
    /* Dies ist ein mehrzeiliger Kommentar.
    b = 3.0 + 1.2 + b;
    */
    std::cout << "Zwischenwert " << b << std::endl;
    b = 3.0 + 1.2 + b;
    std::cout << "a ist " << a << " und b ist " << b << " und pi ist " << pi << std::endl;
    std::cout << "d ist " << d << " und e ist " << e << std::endl;
    
    // Anstatt durch 1 zu teilen, könnte man hier durch 0 teilen ausprobieren.
    int y = 1;
    int x = 8 / y;
    std::cout << "x ist " << x << std::endl;
    return 0;
}
