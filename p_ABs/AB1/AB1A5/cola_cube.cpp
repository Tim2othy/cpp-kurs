#include <iostream>
int main()
{
    int x = 2;
    /* Ihr Code hier */

    x *= x;

    x = x * x * (x + x);

    x *= x;

    x *= x / ((x + x) / x);



    x = x - 134217728;

    /* Ihr Code hier*/
    std::cout << x << std::endl;
    return 0;
}