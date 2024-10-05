# include <iostream>


double power(double x, int n)
{
    if (n == 0)
    {
        std::cout << "Ending 1" << std::endl;
        return 1;
    }

    if ((n % 2) == 1)
    {
        double temp1 = x * power(x * x, 0.5 * (n - 1));
        std::cout << "Ending 2" << std::endl;
        return temp1;
    }
    else {
        std::cout << "Ending 3" << std::endl;
        double temp2 = power(x * x, 0.5 * n);
        return temp2;
    }
}

int main()
{
    double x;
    int n;
    std::cout << "Give me first the x and then the n" << std::endl;
    std::cin >> x >> n;
    std::cout << std::endl;



    double output = power(x, n);


    std::cout << "The result is " << output;
}