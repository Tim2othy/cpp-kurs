# include <iostream>
# include <vector>

int main()
{
    int n;
    std::cout << "Give me one n, I'll give out a vector of all divisors " << std::endl;
    std::cin >> n;
    std::vector<int> teiler;

    for (int i = 1; i <= n; i++)
    {
        if ((n % i) == 0)
        {
            teiler.push_back(i);
        }
    }

    for (int i = 0; i < teiler.size(); ++i)
    {
        std::cout << teiler[i] << ", ";
    }
}
