# include <iostream>


double heron(double a)
{

    double x = 2;
    double y = 1;

    while ((x - y < -0.00001) || (x - y > 0.000001))
    {
        x = y;
        y = 0.5 * (x + a / x);
    }
    return x;
}
