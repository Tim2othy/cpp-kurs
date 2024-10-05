/* Summe der ersten n Zahlen. */

#include <iostream>

int main()
{
    int n = 10; /* Addiere bis zu dieser Zahl */
    int i;
    int summe = 0;

    i = 0;

    while (i < n + 1)
    {
        summe = summe + i; /* addiere ite Zahl auf summe */
        i++;
    }
    std::cout << "Das Ergebnis ist " << summe << std::endl;
    return 0;
}