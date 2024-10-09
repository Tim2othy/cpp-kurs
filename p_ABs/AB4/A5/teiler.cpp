# include <iostream>
# include <vector>




int main()
{
    int n;
    std::cout << "Give me one n, I'll give out a vector of all divisors " << std::endl;
    std::cin >> n;
    std::vector<int> teiler;

    std::cout << n << std::endl;

    if ((n % 2) == 1)
    {
        std::cout << "works" << std::endl;
    }

    int dex = 0;

    for (int i = 0; i * i <= n; i++)
    {

        std::cout << "test" << std::endl;

        int x = dex;

        if ((n % 8) == 0)
        {
            std::cout << "test 2" << std::endl;

        }
        dex++;

    }


    for (int i = 0; i < teiler.size(); ++i)
    {
        std::cout << teiler[i] << ", ";
    }
    return 0;
}
