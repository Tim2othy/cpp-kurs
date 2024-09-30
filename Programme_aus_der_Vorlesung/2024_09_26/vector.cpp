#include <iostream>
#include <vector>

int main ()
{
    int n = 0;
    std::cout << "Wie groß soll der Vector sein?" << std::endl;
    std::cin >> n;
    std::vector<double> mein_vector(n);
    std::cout << "Der Vektor hat Groesse " << mein_vector.size() << std::endl;
    /* Speichert an Stelle i den Wert i + 0.5, d.h., der Vektor ist {0.5, 1.5, 2.5, ...} */
    for (unsigned int i = 0; i < mein_vector.size(); ++i)
    {
        mein_vector[i] = i + 0.5;
    }
    /* Das hier gibt den Vektor aus */
    for (unsigned int i = 0; i < mein_vector.size(); ++i)
    {
        std::cout << mein_vector[i] << ", ";
    }
    std::cout << std::endl;
    return 0;
}
