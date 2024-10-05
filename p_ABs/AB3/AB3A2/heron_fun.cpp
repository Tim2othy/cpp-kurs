# include <iostream>


int heron(double a)
{

    double x = 2;
    double y = 1;

    while ((x - y < -0.00001) || (x - y > 0.000001))
    {
        x = y;
        y = 0.5 * (x + a / x);
    }
    return x;
}



int main()
{
    double input;
    std::cout << "Give a Positive number" << std::endl;
    std::cin >> input;
    std::cout << std::endl;

    double output;

    output = heron(input);


    std::cout << output << std::endl;
    std::cout << output * output;
}