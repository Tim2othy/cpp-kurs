# include <iostream>


double naiv_power(double x, int n)
{
    double result = 1;
    for (size_t i = 1; i < n; i++)
    {
        result = result * x;
    }
    return result;
}




int main()
{
    double x;
    int n;
    std::cout << "Give me first the x and then the n" << std::endl;
    std::cin >> x >> n;
    std::cout << std::endl;



    double output = naiv_power(x, n);


    std::cout << "The result is " << output;
}