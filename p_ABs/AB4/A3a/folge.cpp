# include <iostream>

int folge(int n)
{
    if (n < 2)
    {
        return 1;
    }
    else
    {
        double output = 2 * folge(n - 1) + folge(n - 2) + 2 * folge(n - 3);
        return output;
    }
}

int main()
{
    double n;
    std::cout << "Give me one n " << std::endl;
    std::cin >> n;
    std::cout << std::endl;

    double output = folge(n);

    std::cout << "The result is " << output;
}
