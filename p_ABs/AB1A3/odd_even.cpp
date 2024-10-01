# include <iostream>

int main() {
    int n = 13;

    if ((n % 2) == 0)
    {
        std::cout << n / 2;
    }
    else
    {
        std::cout << (n + 1) / 2;
    }
}