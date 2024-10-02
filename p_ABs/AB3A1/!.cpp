#include <iostream>

int fakultaet(int n)
{
    std::cout << "Test f" << std::endl;

    int ergebnis = 1; /* speichert die Fakultaet */

    while (n > 0) /* verkleinere n, bis es */
    {
        ergebnis *= n; /* null ist und multi-*/
        n--; /* pliziere mit ergebnis */
    }
    return ergebnis;
}

int main()
{
    std::cout << "Test1" << std::endl;

    int add2fak;
    const int a = 5;
    const int b = 16;

    add2fak = fakultaet(a) + fakultaet(b);
    std::cout << "Test2" << std::endl;

    std::cout << a << "! + " << b << "! = " << add2fak << std::endl;
    std::cout << "Test3" << std::endl;

    return 0;
}