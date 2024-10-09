# include <iostream>

long int fak(int n)
{

    int ergebnis = 1; /* speichert die Fakultaet */

    while (n > 0) /* verkleinere n, bis es */
    {
        ergebnis *= n; /* null ist und multi-*/
        n--; /* pliziere mit ergebnis */
    }
    return ergebnis;
}


long int binom(int n, int k)
{
    int ergebnis = fak(n) / (fak(k) * fak(n - k));

    return ergebnis;
}


int bell(int number)
{
    if (number == 0)
    {
        return 1;
    }

    long int ergebnis = 0;

    for (size_t i = 0; i <= number - 1; i++)
    {
        ergebnis = ergebnis + binom(number - 1, i) * bell(i);
        std::cout << "temp result = " << ergebnis << std::endl;
        std::cout << "with i = " << i << std::endl;


    }
    return ergebnis;
}

int main()
{
    double n;
    std::cout << "Give me one n, Ill calculate B(n) " << std::endl;
    std::cin >> n;
    std::cout << std::endl;

    int output = bell(n);
    std::cout << "it is " << output;
}
