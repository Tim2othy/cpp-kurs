# include <iostream>

int main()
{
    std::cout << "Gib Fahrenheit ein:";

    int input;
    std::cin >> input;

    input = (input - 32) / 1.8;


    std::cout << "In Celsius: " << input;
}