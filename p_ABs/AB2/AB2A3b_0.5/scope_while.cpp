# include <iostream>

int main()
{
    int out = 7;
    int n = 50;



    while (n < 100)
    {
        out = out + 3 + n;
        n++;
        std::cout << out << std::endl;
    }



    std::cout << out * 2;
}