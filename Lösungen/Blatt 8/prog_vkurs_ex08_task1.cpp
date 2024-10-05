#include <iostream>
#include <string>
#include <vector>
#include <cassert>
#include <fstream>
#include <sstream>


class Punkt {
public:
	Punkt(int x, int y) {
		// Übernehmen der Parameter
		_x = x;
		_y = y;
	}
	
	// Getter-Setter Methoden
	int get_x() const {
		return _x;
	}
	int get_y() const {
		return _y;
	}
	
private:
	int _x, _y;
};


class Rechteck {
public: 
	Rechteck(int x_min, int x_max, int y_min, int y_max) {
		// Übernehmen der Parameter
		_x_min = x_min;
		_x_max = x_max;
		_y_min = y_min;
		_y_max = y_max;
		
		// Test ob es sich um ein Rechteck handelt
		assert(x_min < x_max and y_min < y_max);
	}
	
	// Ausgabe des Rechtecks
	void print() const {
		std::cout << "[" << _x_min << "," << _x_max << "] x [" << _y_min << "," << _y_max << "]";
	}
	
	// Prüft ob ein gegebener Punkt im Rechteck liegt
	bool enthaelt_punkt(const Punkt &punkt) const {
		int x = punkt.get_x();
		int y = punkt.get_y();
		
		return (_x_min <= x and x <= _x_max and _y_min <= y and y <= _y_max);
	}
	
	// Getter-Setter Methoden
	int get_x_min() const {
		return _x_min;
	}
	int get_x_max() const {
		return _x_max;
	}
	int get_y_min() const {
		return _y_min;
	}
	int get_y_max() const {
		return _y_max;
	} 
	
private:
	int _x_min, _x_max, _y_min, _y_max;
};


// Liest eine Menge an Rechtecken aus einer gegebenen Datei aus
std::vector<Rechteck> eingabedatei_auslesen(const std::string &datei_name) {
	std::vector<Rechteck> rechtecke;
	
	// Nutzt den Dateipfad um an die Datei zu gelangen
	std::ifstream datei(datei_name);
	
	// Prüft ob diese Datei existiert
	assert(datei);
	
	// Geht zeilenweise durch die Datei und liest die vier Zahlen ein
	std::string zeile;
	while(std::getline(datei, zeile)) {
		int x_min, x_max, y_min, y_max;
		std::stringstream ss(zeile); // Liefert einen Stringstream zurück
		ss >> x_min >> x_max >> y_min >> y_max;
		
		// Erstellt ein neues Rechteck mit den angegebenen Werten und speichert dieses im Vektor
		rechtecke.push_back(Rechteck(x_min, x_max, y_min, y_max));
	}
	
	return rechtecke;
}


// Prüft für zwei gegebene Rechtecke r1 und r2, ob sie sich schneiden
// Idee: Falls r1 nicht vollständig links, rechts, unter oder über r2 liegt, 
//       dann gibt es eine Überschneidung.
bool ueberschneiden_zwei_rechtecke(const Rechteck &r1, const Rechteck &r2) {
	// Fall 1: r1 liegt links von r2.
	if(r1.get_x_max() <= r2.get_x_min()) {
		return false;
	}
	
	// Fall 2: r1 liegt rechts von r2
	if(r1.get_x_min() >= r2.get_x_max()) {
		return false;
	}
	
	// Fall 3: r1 liegt unterhalb von r2
	if(r1.get_y_max() <= r2.get_y_min()) {
		return false;
	}
	
	// Fall 4: r1 liegt oberhalb von r2
	if(r1.get_y_min() >= r2.get_y_max()) {
		return false;
	}
	
	return true;
}


// Prüft eine Menge von Rechtecken auf Überschneidungen
bool existiert_ueberschneidung(const std::vector<Rechteck> &rechtecke) {
	// Iteriert über alle Paare (r1,r2) von Rechtecken
	for(unsigned i=0; i<rechtecke.size(); ++i) {
		for(unsigned j=i+1; j<rechtecke.size(); ++j) {
			// Prüfe diese zwei Rechtecke auf eine Überschneidung
			if(ueberschneiden_zwei_rechtecke(rechtecke[i], rechtecke[j])) {
				return true;
			}
		}
	}
	
	return false;
}


// Findet ein kleinstes Rechteck, das alle gegebenen Rechtecke enthält
// Der Einfachheit wird angenommen, dass mind. ein Rechteck übergeben wird
Rechteck finde_kleinstes_rechteck(const std::vector<Rechteck> &rechtecke) {
	// Starte mit dem ersten Rechteck aus der Liste
	int x_min = rechtecke[0].get_x_min();
	int x_max = rechtecke[0].get_x_max();
	int y_min = rechtecke[0].get_y_min();
	int y_max = rechtecke[0].get_y_max();
	
	// Iteriere durch die übrigen Rechtecke und aktualisiere x_min, x_max, y_min, y_max
	for(unsigned i=1; i<rechtecke.size(); ++i) {
		x_min = std::min(x_min, rechtecke[i].get_x_min());
		x_max = std::max(x_max, rechtecke[i].get_x_max());
		y_min = std::min(y_min, rechtecke[i].get_y_min());
		y_max = std::max(y_max, rechtecke[i].get_y_max());
	}
	
	// Erstelle mit diesen Werten ein neues Rechteck
	return Rechteck(x_min, x_max, y_min, y_max);
}


// Finde alle Rechtecke, die einen bestimmten Punkt enthalten
std::vector<Rechteck> finde_rechtecke_mit_punkt(const std::vector<Rechteck> &rechtecke, const Punkt &punkt) {
	std::vector<Rechteck> zielmenge;
	
	for(const Rechteck &rechteck : rechtecke) {
		if(rechteck.enthaelt_punkt(punkt)) {
			zielmenge.push_back(rechteck);
		}
	}
	
	return zielmenge;
}


int main() {
	
	// Aufgabenteil a)
	// Eingabe des Dateinamens
	std::string datei_name;
	std::cout << "Geben Sie den Dateinamen ein: " << std::endl;
	std::cin >> datei_name;
	
	// Auslesen der Eingabe-Datei 
	std::vector<Rechteck> rechtecke = eingabedatei_auslesen(datei_name);
	
	for(auto r : rechtecke) {
		r.print();
		std::cout << "\n";
	}
	
	// Aufgabenteil b)
	if(existiert_ueberschneidung(rechtecke)) {
		std::cout << "\nEs gibt mindestens eine Überschneidung." << std::endl;
	} else {
		std::cout << "\nEs gibt keine Überschneidung." << std::endl;
	}
	
	// Aufgabenteil c)
	std::cout << "\nDas kleinste alle Rechtecke umschließende Rechteck ist: "; 
	finde_kleinstes_rechteck(rechtecke).print();
	std::cout << std::endl;
	
	// Aufgabenteil d)
	std::cout << "Geben Sie einen Punkt ein: " << std::endl;
	int x, y;
	std::cin >> x >> y;
	Punkt punkt(x, y);
	std::cout << "Die folgenden Rechtecke enthalten den Punkt:" << std::endl;
	for(const Rechteck &rechteck : finde_rechtecke_mit_punkt(rechtecke, punkt)) {
		std::cout << "  "; 
		rechteck.print(); 
		std::cout << std::endl;
	}
}