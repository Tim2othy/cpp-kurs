#include <iostream>

/* Sehr rudimentaere Version einer Klasse zur
    Verwaltung von Punkten in der Ebene: */
class Punkt {
public: // Oeffentlich zugaengliche Daten
    Punkt(double x_coor, // Ein Constructor der Klasse
        double y_coor)
    {
        _x_coor = x_coor;
        _y_coor = y_coor;
    }
    double _x_coor;
    double _y_coor;
}; // Ende der Beschreibung der Klasse

void punkt_ausgeben(const Punkt& punkt)
{
    std::cout << "x: " << punkt._x_coor << " y: " << punkt._y_coor << std::endl;
}

int main()
{
    Punkt mein_punkt(37, 42.5);

    punkt_ausgeben(mein_punkt);
    mein_punkt._y_coor = 2;
    punkt_ausgeben(mein_punkt);
    mein_punkt._x_coor += 15;
    punkt_ausgeben(mein_punkt);
}