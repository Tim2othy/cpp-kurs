#include <iostream>

void max_und_min(const int a, const int b, int & max, int & min);

int main ()
{
    int a = 4;
    int b = 6;
    int max = 0;
    int min = 0;
    max = 3;
    max_und_min(a, b, max, min);
    std::cout << "Max ist " << max << " und min ist " << min << std::endl;
}

void max_und_min(const int a, const int b, int & max, int & min)
{
    if (a < b)
    {
        min = a;
        max = b;
    }
    else
    {
        max = a;
        min = b;
    }
    return; // muss nicht unbedingt da sein
}
