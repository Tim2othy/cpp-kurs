#include <iostream>

int main ()
{
    int radius = 0;
    double weitere_zahl = 0;
    std::cout << "Gib einen Radius ein" << std::endl;
    std::cin >> radius >> weitere_zahl;
    /*radius += 1;
    ++radius;*/
    std::cout << "Radius ist jetzt " << radius << " und weitere Zahl ist " << weitere_zahl << std::endl;
    const double pi = 3.14;
    const double flaeche = pi * radius * radius;
    std::cout << "Flaeche ist " << flaeche << std::endl;
    const int flaeche_gerundet = static_cast<int>(flaeche);
    std::cout << "Zu 0 gerundet: " << flaeche_gerundet << std::endl;
    return 0;
}
