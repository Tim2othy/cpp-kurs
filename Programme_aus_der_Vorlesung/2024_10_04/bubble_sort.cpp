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
    std::vector<int> zahlen;
    
    for (int i = 30000; i >= 0; --i) {
       zahlen.push_back(i);
    }

    sortieren(zahlen);
}
