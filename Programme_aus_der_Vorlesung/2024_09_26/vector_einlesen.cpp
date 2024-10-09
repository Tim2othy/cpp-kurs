#include <iostream>
#include <vector>

// Vector kann Argument oder Rückgabewert sein
// Das hier kopiert den Vektor und gibt die Kopie zurück
std::vector<int> schreibe_i_an_stelle_i(std::vector<int> vector)
{
    for (unsigned int i = 0; i < vector.size(); ++i)
    {
        vector[i] = i;
    }
    return vector;
}

// Das hier verändert den Vektor, den die Funktion als Argument kriegt.
/*void schreibe_i_an_stelle_i(std::vector<int> & vector)
{
    for (unsigned int i = 0; i < vector.size(); ++i)
    {
        vector[i] = i;
    }
    return vector;
}*/


int main()
{
    std::vector<int> vector;
    int zuletzt_eingelesen = 0;
    while (zuletzt_eingelesen != -1)
    {
        std::cin >> zuletzt_eingelesen;
        vector.push_back(zuletzt_eingelesen);
    }
    std::vector<int> zweiter_vector = schreibe_i_an_stelle_i(vector);
    for (unsigned int i = 0; i < vector.size(); ++i)
    {
        std::cout << vector[i] << ", ";
    }
    std::cout << std::endl;
    for (unsigned int i = 0; i < zweiter_vector.size(); ++i)
    {
        std::cout << zweiter_vector[i] << ", ";
    }
    std::cout << std::endl;
    return 0;
}
