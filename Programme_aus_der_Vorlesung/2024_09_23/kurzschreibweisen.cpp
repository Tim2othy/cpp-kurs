#include <iostream>

int main ()
{
    int x = 0;
    x += 3;
    std::cout << "x ist jetzt " << x << std::endl;
    ++x;
    std::cout << "x ist jetzt " << x << std::endl;
    --x;
    std::cout << "x ist jetzt " << x << std::endl;
    x *= 5;
    std::cout << "x ist jetzt " << x << std::endl;
    x *= 5 + 1;
    std::cout << "x ist jetzt " << x << std::endl;
    x -= 5;
    std::cout << "x ist jetzt " << x << std::endl;
    return 0;
}
