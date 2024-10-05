# include <iostream>

long int fakultaet(int n)
{
    std::cout << "Test f" << std::endl;

    int ergebnis = 1; /* speichert die Fakultaet */

    while (n > 0) /* verkleinere n, bis es */
    {
        ergebnis *= n; /* null ist und multi-*/
        n--; /* pliziere mit ergebnis */
    }
    return ergebnis;
}

double power(double x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    if ((n % 2) == 1)
    {
        double temp1 = x * power(x * x, 0.5 * (n - 1));
        return temp1;
    }
    else {
        double temp2 = power(x * x, 0.5 * n);
        return temp2;
    }
}

double expo(double x)
{
    double result = 0;

    for (size_t k = 0; k < 10000000; k++)
    {
        result = result + power(x, k) / fakultaet(k);
    }
    return result;

}

double log(double x) {
    double result = 0;

    for (size_t k = 0; k < 1000000; k++)
    {
        result = result + power((x - 1) / (x + 1), 2 * k + 1) * 1 / (2 * k + 1);

    }

    result = result * 2;
    return result;
}

double real_power(double x, double y) {
    double result;

    result = exp(y * log(x));

    return result;
}

int main()
{
    double x;
    double y;
    std::cout << "Give me an x and an y " << std::endl;
    std::cin >> x >> y;
    std::cout << std::endl;



    double output = real_power(x, y);


    std::cout << "The result is " << output;
}