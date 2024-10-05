#ifndef BRUCH_OPP_HPP
#define BRUCH_OPP_HPP
#endif

class Bruch {
public:
Bruch(int zaehler, int nenner);
 
void print();
 
Bruch operator*(const Bruch &bruch) const;

Bruch operator+(const Bruch &bruch) const;

Bruch kuerzen() const;

int get_zaehler() const;
 
int get_nenner() const;

void set_zaehler(int zaehler);

void set_nenner(int nenner);

private:
    int _zaehler;
    int _nenner;
};