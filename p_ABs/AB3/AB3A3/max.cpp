# include <iostream>


int minimum(int a, int b, int c)
{
    if (a < b) {
        if (a < c)
        {
            return(a);
        }
        else {
            return(c);
        }
    }
    if (b < c)
    {
        return(b);
    }
    return(c);
}

int maximum(int a, int b, int c)
{
    if (a > b) {
        if (a > c)
        {
            return(a);
        }
        else {
            return(c);
        }
    }
    if (b > c)
    {
        return(b);
    }
    return(c);
}


int main()
{
    int a;
    int b;
    int c;
    std::cout << "Give me 3 non identical ints" << std::endl;
    std::cin >> a >> b >> c;
    std::cout << std::endl;


    int min = minimum(a, b, c);

    int max = maximum(a, b, c);


    std::cout << "the min is: " << min << "the max is " << max;
}