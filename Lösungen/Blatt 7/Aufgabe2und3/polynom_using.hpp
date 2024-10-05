#ifndef POLYNOM_USING_HPP
#define POLYNOM_USING_HPP
#endif

#include <vector>
//nimmt an, dass die Koeffizienten vom kleinsten Exponenten an nummeriert sind. Beginnend bei 0.
class Polynom {

using koef_typ = double;

public:
Polynom(unsigned n, std::vector<koef_typ> koef);

unsigned get_grad() const;

koef_typ get_koef(unsigned index) const;

void set_koef(unsigned index, koef_typ wert);

Polynom operator+(Polynom &p2) const;

Polynom operator*(Polynom &p2) const;

bool gegen_unendlich();

koef_typ wert_bei(koef_typ x) const;

private:
    std::vector<koef_typ> _koef;
    unsigned grad;
};