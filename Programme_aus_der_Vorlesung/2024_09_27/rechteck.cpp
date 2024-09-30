#include <iostream>

class Rechteck
{
    public:
    
    Rechteck(int a, int b, int y_min, int y_max)
    {
        _x_min = a;
        _x_max = b;
        _y_min = y_min;
        _y_max = y_max;
    }
    Rechteck()
    {
        _x_min = 0;
        _x_max = 0;
        _y_min = 0;
        _y_max = 0;
    }
    
    
    int flaecheninhalt()
    {
        int breite = _x_max - _x_min;
        int laenge = _y_max - _y_min;
        return breite * laenge;
    }
    
    int _x_min;
    int _x_max;
    int _y_min;
    int _y_max;
};

int main ()
{
    Rechteck rechteck1(0, 1, 2, 5);
    Rechteck leeres_rechteck;
    std::cout << rechteck1.flaecheninhalt() << std::endl;
    std::cout << leeres_rechteck.flaecheninhalt() << std::endl;
    
}
