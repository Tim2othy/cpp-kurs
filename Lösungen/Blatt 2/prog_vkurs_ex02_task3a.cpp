/* Primzahltest (Teil a) */

#include <iostream>

int main ()
{
	// Zu prüfender Kandidat für eine Primzahl
	int c = 17;
	
	// Iteriere über alle möglichen Teiler (bis einschließlich Wurzel n)
    for(int n=2; n*n<=c; ++n) {
		// Falls es sich um einen Teiler von c handelt, gibt es eine entsprechende Ausgabe.
        if(c%n == 0) {
			std::cout << "c = " << c << " ist keine Primzahl, ein Teiler ist n = " << n << "." << std::endl;
            return 0;
        }
    }
	
	// Wurde kein Teiler gefunden, handelt es sich um eine Primzahl
	std::cout << "c = " << c << " ist eine Primzahl." << std::endl;

    return 0;
}