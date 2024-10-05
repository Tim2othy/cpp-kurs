# include <iostream>

int main()
{
    double a;

    std::cout << "Give a Positive number" << std::endl;
    std::cin >> a;
    std::cout << std::endl;
    double x = 2;
    double y = 1;


    while ((x - y < -0.00001) || (x - y > 0.000001))
    {
        x = y;
        y = 0.5 * (x + a / x);
    }

    std::cout << x << std::endl;

    std::cout << x * x;

}