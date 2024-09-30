#include <iostream>
#include <vector>

void streiche_vielfache_weg (
    std::vector<bool> & primzahl, unsigned int i)
{
    for (unsigned int j = 2; j * i < primzahl.size(); ++j)
    {
        primzahl[j * i] = false;
    }
}

int main ()
{
    unsigned int n = 0;
    std::cout << "Gib mir eine Zahl n: " << std::endl;
    std::cin >> n;
    
    // An Stelle i: Ist i eine Primzahl?
    std::vector<bool> primzahl(n + 1, true);
    // std::vector<bool> primzahl;
    // danach könnte man n + 1 mal primzahl.push_back(true);
    primzahl[0] = false;
    primzahl[1] = false;
    for (unsigned int i = 2; i * i <= n; ++i)
    {
        if (primzahl[i] == true)
        {
            streiche_vielfache_weg(primzahl, i);
        }
    }
    for (unsigned int i = 0; i < primzahl.size(); ++i)
    {
        if (primzahl[i] == true)
        {
            std::cout << i << ", ";
        }
    }
    std::cout << std::endl;
    return 0;
}
