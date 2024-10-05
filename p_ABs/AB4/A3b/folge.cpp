# include <iostream>

int folge(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;
    int d;

    for (size_t i = 0; i < n; i++)
    {
        d = 2 * c + b + 2 * a;

        a = b;
        b = c;
        c = d;
    }
    std::cout << "The result is " << b << std::endl;
    return 0;
}

int main()
{
    double n;
    std::cout << "Give me one n " << std::endl;
    std::cin >> n;
    std::cout << std::endl;

    folge(n);
}
