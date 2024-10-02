# include <iostream>

int main()
{
    std::cout << "Give me a number, I'll test if it's prime" << std::endl;

    int input;
    std::cin >> input;

    for (int n = 2; n * n < input; n++)
    {
        if ((input % n) == 0)
        {
            std::cout << "Not prime" << std::endl;
            break;
        }
        std::cout << "Could be prime" << std::endl;
    }
}