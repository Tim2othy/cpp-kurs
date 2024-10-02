# include <iostream>

int main()
{
    int input;
    std::cin >> input;

    bool output;
    output = ((input % 2) == 0);

    std::cout << output;
}