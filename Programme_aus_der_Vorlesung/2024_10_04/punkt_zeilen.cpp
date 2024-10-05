#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

class Punkt {
public:
   Punkt(int x, int y) :
      _x(x),
      _y(y)
   {}

   int get_x() const
   { return _x; }

   int get_y() const
   { return _y; }

   void set_x(int new_x) {
      _x = new_x;
   }

   void set_y(int new_y) {
      _y = new_y;
   }

   void print() const {
      std::cout << "(" << _x << ", " << _y << ")";
   }

   Punkt operator+(const Punkt& rhs) const {
      return Punkt(
         get_x() + rhs.get_x(),
         get_y() + rhs.get_y()
      );
   }

   bool operator!=(const Punkt& rhs) const {
      return get_x() != rhs.get_x() or get_y() != rhs.get_y();
   }

   void operator+=(const Punkt& rhs) {
      _x = _x + rhs.get_x();
      _y = _y + rhs.get_y();
   }
private:
   int _x;
   int _y;
};

int main(int count, char** args) {
   if (count != 2) {
      std::cout << "Bitte genau einen Parameter angeben!" << std::endl;
      return 1;
   }
   std::string input_name = args[1];
   std::ifstream datei_stream(input_name);
   std::vector<Punkt> punkte;
   std::string zeile;
   while (std::getline(datei_stream, zeile)) {
      std::stringstream zeilen_stream(zeile);
      int x = 0;
      int y = 0;
      zeilen_stream >> x >> y;
      if (not zeilen_stream) {
         std::cout << "Kaputte Zeile " << zeile << std::endl;
         return 1;
      }
      Punkt neuer_punkt(x, y);
      punkte.push_back(neuer_punkt);
   }
   Punkt summe(0, 0);
   for (const Punkt& punkt : punkte) {
      summe += punkt;
   }
   summe.print();
   std::cout << std::endl;

   Punkt test_summe(157, 1384);
   if (summe != test_summe) {
      std::cout << "Test_summe ist falsch" << std::endl;
   }
}

