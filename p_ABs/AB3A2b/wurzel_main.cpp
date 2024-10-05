# include <iostream>
#include "wurzel_func.cpp"



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