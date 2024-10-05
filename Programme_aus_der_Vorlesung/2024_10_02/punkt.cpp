#include <iostream>

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

   Punkt addiere(const Punkt& rhs) const {
      Punkt summe(
         get_x() + rhs.get_x(),
         get_y() + rhs.get_y()
      );
      return summe;
   }

   Punkt operator+(const Punkt& rhs) const {
      return addiere(rhs);
   }

   Punkt operator-() const {
      return Punkt(-get_x(), -get_y());
   }

   Punkt operator-(const Punkt& rhs) const {
      //Alle 3 Varianten machen das selbe
      //return *this + (-rhs);
      return addiere(-rhs);
      //return Punkt(
      //   get_x() - rhs.get_x(),
      //   get_y() - rhs.get_y()
      //);
   }
private:
   int _x;
   int _y;
};

int main() {
   Punkt a(1, 2);
   Punkt b(3, 8);
   Punkt c = a - b;
   a.print();
   std::cout << std::endl;
   b.print();
   std::cout << std::endl;
   c.print();
   std::cout << std::endl;
}
