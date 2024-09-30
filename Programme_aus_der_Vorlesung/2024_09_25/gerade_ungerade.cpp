#include <iostream>

// Bessere Implementierung von gerade: n % k gibt den Rest von
// n geteilt durch k zurück

bool ungerade (int zahl);
bool gerade (int zahl);

bool ungerade (int zahl)
{
    return not gerade(zahl);
}

bool gerade (int zahl)
{
    if (zahl == 0)
    {
        return true;
    }
    return ungerade(zahl - 1);
}

int main ()
{
    int n = 0;
    std::cin >> n;
    std::cout << n << " ist gerade ist " << gerade(n)
        << std::endl;
    return 0;
}
