#include <iostream>

int main ()
{
    //const double pi = 3.14;
    const int a = -7;
    int b = 3;
    double a_double = static_cast<double>(a);
    double c = a_double / b;
    std::cout << c << std::endl;
    int x = 1;
    double y = 1.3;
    int z = static_cast<int>(x + y);
    
    return 0;
}
