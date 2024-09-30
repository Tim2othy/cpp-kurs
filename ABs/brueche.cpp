#include <iostream>

class Bruch {
public:
   Bruch(int zaehler,
         int nenner)
   {
      _zaehler = zaehler;
      _nenner = nenner;
   }

   void print()
   {
      std::cout << _zaehler << " / " << _nenner << std::endl;
   }

   Bruch multiplizieren (const Bruch & bruch) const
   {
      return Bruch(_zaehler * bruch.get_zaehler(),
                   _nenner * bruch.get_nenner());
   }

   int get_zaehler() const
   {
      return _zaehler;
   }

   int get_nenner() const
   {
      return _nenner;
   }

private:
   int _zaehler;
   int _nenner;
};
