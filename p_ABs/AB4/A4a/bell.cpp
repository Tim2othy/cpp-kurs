# include <iostream>

long int fak(int n)
{
    int erg = 1;
    while (n > 0)
    {
        erg *= n;
        n--;
    }
    return erg;
}

int binom(int n, int k) { return fak(n) / (fak(k) * fak(n - k)); }

int bell(int number)
{
    if (number == 0) {
        return 1;
    }
    int erg = 0;
    for (size_t i = 0; i <= number - 1; i++) {
        erg += binom(number - 1, i) * bell(i);
    }
    return erg;
}

int main()
{
    double n;
    std::cout << "Give me one n, Ill calculate B(n) " << std::endl;
    std::cin >> n;
    std::cout << "it is " << bell(n);
}
