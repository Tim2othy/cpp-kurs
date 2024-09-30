#include <iostream>
#include <vector>

void sortiere_j(std::vector<int> & zahlen, unsigned int j)
{
    if (zahlen[j] > zahlen[j + 1])
    {
        int zwischenspeicher = zahlen[j + 1];
        zahlen[j + 1] = zahlen[j];
        zahlen.at(j) = zwischenspeicher;
    }
}

void sortiere_max_nach_hinten(std::vector<int> & zahlen, unsigned int i)
{
    for (unsigned int j = 0; j < i; ++j)
    {
        sortiere_j(zahlen, j);
    }
}

void sortieren(std::vector<int> & zahlen)
{
    for (unsigned int i = zahlen.size() - 1; i >= 1; --i)
    {
        sortiere_max_nach_hinten(zahlen, i);
    }
}

int main ()
{
    int zahl = 0;
    std::cout << "Gib mir Zahlen: " << std::endl;
    std::vector<int> zahlen;
    while (zahl != -1)
    {
        std::cin >> zahl;
        if (zahl != -1)
        {
            zahlen.push_back(zahl);
        }
    }
    if (zahlen.size() == 0)
    {
        return 0;
    }
    sortieren(zahlen);
    for (int eintrag : zahlen)
    {
        std::cout << eintrag << ", ";
    }
    std::cout << std::endl;
}
