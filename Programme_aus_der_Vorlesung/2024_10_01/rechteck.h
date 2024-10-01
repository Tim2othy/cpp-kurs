#ifndef RECHTECK_H
#define RECHTECK_H

#include <vector>

using Koordinate = int;
using Flaeche = int;

class Rechteck {
public:
   Rechteck(
      Koordinate x_min, Koordinate x_max,
      Koordinate y_min, Koordinate y_max
   );

   Rechteck();

   Flaeche flaecheninhalt() const;

   Koordinate x_min() const;

   Koordinate y_min() const;

   Koordinate x_max() const;

   Koordinate y_max() const;

   void set_x_min(Koordinate new_x_min);

   void set_x_max(Koordinate new_x_max);

private:
   void update_flaeche();

   Koordinate _x_min;
   Koordinate _x_max;
   Koordinate _y_min;
   Koordinate _y_max;
   Flaeche _flaeche;
};

Rechteck schnitt(
   const Rechteck & rechteck_1,
   const Rechteck & rechteck_2
);

Rechteck schnitt(const std::vector<Rechteck>& rechtecke);

void print_rechteck(const Rechteck & r);

#endif
