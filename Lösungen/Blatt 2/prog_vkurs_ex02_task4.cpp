/* Heron-Verfahren (Annäherung der Wurzelfunktion) */

#include <iostream>

int main ()
{
	
	// Einlesen der Eingabe zu der wir die Quadratwurzel approximativ bestimmen wollen.
	std::cout << "Geben Sie bitte einen Wert a ein: ";
	double a;
	std::cin >> a;
	
	// Aktuelles Folgenglied
	double current = a;
	
	// Iteriere solange bis wir "ausreichend" nahe an der Quadratwurzel sind.
	while(true) {
        // Berechne das nächste Folgenglied.
        double next = 0.5 * (current + a/current);

        // Prüfe ob das Ende erreicht ist (next und current ausreichend nahe beinander sind)
        if(std::abs(next-current) < 0.0000001) {
            std::cout << "Die Wurzel von " << a << " ist ungefaehr " << next << "." << std::endl;
            return 0;
        }

        // Falls wir nicht fertig sind, aktualisiere das aktuelle Folgenglied.
        current = next;
    }
}