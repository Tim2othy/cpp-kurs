#include <iostream>
#include <vector>



std::vector<int> merge(const std::vector<int>& veca, const std::vector<int>& vecb)
{
    std::vector<int> output;
    int ai = 0;
    int bi = 0;

    while (ai + bi <= veca.size() + vecb.size())
    {

        if (veca.at(ai) <= vecb.at(bi))
        {
            output.push_back(veca.at(ai));
            ai++;
        }
        else {
            output.push_back(vecb.at(bi));
            bi++;
        }
    }
    return output;
}

int main()
{
    std::vector<int> veca;
    std::vector<int> vecb;
    int eingabe;


    std::cout << "Geben Sie die ints für veca ein." << std::endl;
    std::cout << "Mit einer negativen Zahl koennen Sie die Eingabe beenden" << std::endl;

    do
    {
        std::cout << "Naechster Eintrag bitte. ";
        std::cin >> eingabe;
        if (eingabe >= 0)
        {
            veca.push_back(eingabe);
        }
    } while (eingabe >= 0);

    std::cout << "Geben Sie die ints für vecb ein." << std::endl;
    std::cout << "Mit einer negativen Zahl koennen Sie die Eingabe beenden" << std::endl;

    do
    {
        std::cout << "Naechster Eintrag bitte. ";
        std::cin >> eingabe;
        if (eingabe >= 0)
        {
            vecb.push_back(eingabe);
        }
    } while (eingabe >= 0);


    std::cout << "Jetzt werden beide gemerged. ";

    std::vector<int> result_vec = merge(veca, vecb);

    std::cout << "Das ergebnis ist ";

    for (int i = 0; i < result_vec.size(); ++i)
    {
        std::cout << result_vec[i] << ", ";
    }
    return 0;
}