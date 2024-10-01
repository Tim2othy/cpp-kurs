/* Primzahlsuche (Teil b) */

#include <iostream>

int main ()
{
	
	// Startzahl von der die Suche gestartet wird.
	int start = 20000;
	
	// Gibt an ob eine Primzahl gefunden wurde.
	bool prime_gefunden = false;
	
	// Iterere nacheinander über alle Kandidaten bis eine Primzahl gefunden wurde.
	for(int c=start; not prime_gefunden; ++c) {
			
		// Bis wir ein Teiler von c finden, gehen wir davon aus, dass es sich um eine Primzahl handelt.
		prime_gefunden = true;
			
		// Iteriere über alle möglichen Teiler (bis einschließlich Wurzel n)
		for(int n=2; n*n<=c; ++n) {
			// Falls es sich um einen Teiler von c handelt, ist c keine Primzahl und wir merken uns dies.
			// Gleichzeitig können wir die innerste Schleife auch abbrechen (Schlüsselwort: break).
			if(c%n == 0) {
				prime_gefunden = false;
				break;
			}
		}
	
		// Wurde kein Teiler gefunden, handelt es sich um eine Primzahl und wir können dies ausgeben.
		if(prime_gefunden) {
			std::cout << "c = " << c << " ist eine Primzahl." << std::endl;
		}
	}

    return 0;
}