#include <iostream>
#include <vector>
#include <cassert>

using Koordinate = int;
using Flaeche = int;

class Rechteck {
public:
   Rechteck(
      Koordinate x_min, Koordinate x_max,
      Koordinate y_min, Koordinate y_max
   ) :
      _x_min(x_min),
      _x_max(x_max),
      _y_min(y_min),
      _y_max(y_max),
      _flaeche((_x_max - _x_min) * (_y_max - _y_min))
   {
      assert(x_min <= x_max);
      assert(y_min <= y_max);
   }

   Rechteck() : Rechteck(0, 0, 0, 0)
   {}

   Flaeche flaecheninhalt() const
   {
      return _flaeche;
   }

   Koordinate x_min() const { return _x_min; }

   Koordinate y_min() const { return _y_min; }

   Koordinate x_max() const { return _x_max; }

   Koordinate y_max() const { return _y_max; }

   void set_x_min(Koordinate new_x_min) {
      _x_min = new_x_min;
      update_flaeche();
   }

   void set_x_max(Koordinate new_x_max) {
      _x_max = new_x_max;
      update_flaeche();
   }

private:
   void update_flaeche() {
      _flaeche = (_x_max - _x_min) * (_y_max - _y_min);
   }

   Koordinate _x_min;
   Koordinate _x_max;
   Koordinate _y_min;
   Koordinate _y_max;
   Flaeche _flaeche;
};

Rechteck schnitt(
   const Rechteck & rechteck_1,
   const Rechteck & rechteck_2
) {
   Koordinate new_x_min = std::max(
      rechteck_1.x_min(), rechteck_2.x_min()
   );
   Koordinate new_y_min = std::max(
      rechteck_1.y_min(), rechteck_2.y_min()
   );
   Koordinate new_x_max = std::min(
      rechteck_1.x_max(), rechteck_2.x_max()
   );
   Koordinate new_y_max = std::min(
      rechteck_1.y_max(), rechteck_2.y_max()
   );
   Rechteck ergebnis(
      new_x_min, new_x_max, new_y_min, new_y_max
   );
   return ergebnis;
}

Rechteck schnitt(const std::vector<Rechteck>& rechtecke) {
   assert(not rechtecke.empty());
   Rechteck ergebnis = rechtecke.at(0);
   for (const Rechteck& rechteck : rechtecke) {
      ergebnis = schnitt(ergebnis, rechteck);
   }
   return ergebnis;
}

void print_rechteck(const Rechteck & r) {
   std::cout << r.x_min() << " " << r.x_max()
      << " " << r.y_min() << " " << r.y_max()
      << " " << r.flaecheninhalt()
      << std::endl;
}

int main() {
   Rechteck rechteck2(28.5, 20, -5, 7);
   Rechteck rechteck3(21, 22, -5, 7);
   print_rechteck(rechteck2);
   print_rechteck(rechteck3);
}
