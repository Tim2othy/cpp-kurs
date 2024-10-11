#include <iostream>
#include <vector>

/* Liefert das Maximum einer Menge von nichtnegativen Zahlen.
   Wenn keine Zahlen gegeben werden, ist die  Ausgabe 0. */
int maximum(const std::vector<int>& zahlen)
{
    int result = 0;

    for (int i = 0; i < zahlen.size(); i++)
    {
        if (zahlen[i] > result)
        {
            result = zahlen[i];
        }
    }
    return result;
}

int main()
{
    std::vector<int> eintraege;

    std::cout << "Geben Sie nicht-negative Zahlen ein. " << std::endl;
    std::cout << "Mit einer negativen Zahl koennen Sie die Eingabe beenden" << std::endl;
    int eingabe;

    do
    {
        std::cout << "Naechster Eintrag bitte. ";
        std::cin >> eingabe;
        if (eingabe >= 0)
        {
            eintraege.push_back(eingabe);
        }
    } while (eingabe >= 0);
    {


        if (eintraege.size() > 0)
        {
            int groesste_zahl = maximum(eintraege);
            std::cout << "Das Maximum ist: " << groesste_zahl << std::endl;
        }
    }
    return 0;
}