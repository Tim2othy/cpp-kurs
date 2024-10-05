# include <iostream>

unsigned fibonacci(unsigned n)
{
    if (n < 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}



int main()
{
    double n;
    std::cout << "Give me first the x and then the n" << std::endl;
    std::cin >> n;
    std::cout << std::endl;

    double output = fibonacci(n);

    std::cout << "The result is " << output;
}