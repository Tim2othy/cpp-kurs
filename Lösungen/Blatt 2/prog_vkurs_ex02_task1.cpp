/* Summe der ersten n Zahlen. */

#include <iostream>

int main ()
{
	int n = 20; /* Addiere bis zu dieser Zahl */
	int i;
	int summe; /* speichert Zwischenergebnis */ // Fehler 1: Die Summe wird nie (mit 0) initialisiert.

	i = 0;

	while (i < n)
	{
		summe =+ i /* addiere ite Zahl auf summe */ // Fehler 2 & 3: += anstelle =+ sowie ein fehlendes Semikolon.
		// Fehler 4: Ohne Änderung von i erhalten wir eine Endlosschleife, es fehlt ein ++i (oder i++).
	}
	std::cout << "Das Ergebnis ist " << summe << std::endl;
	return 0;
}