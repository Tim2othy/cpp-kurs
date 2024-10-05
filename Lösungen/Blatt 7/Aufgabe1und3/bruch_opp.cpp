#include <iostream>
#include "bruch_opp.hpp"

Bruch::Bruch(int zaehler, int nenner){
_zaehler = zaehler;
_nenner = nenner;
}
 
void Bruch::print(){
    std::cout << _zaehler << " / " << _nenner << std::endl;
}
 
Bruch Bruch::operator*(const Bruch &bruch) const{
    return Bruch(_zaehler * bruch.get_zaehler(),_nenner * bruch.get_nenner());
}

Bruch Bruch::operator+(const Bruch &bruch) const{
    return Bruch(_zaehler*bruch.get_nenner()+_nenner*bruch.get_zaehler(), _nenner*bruch.get_nenner());
}

Bruch Bruch::kuerzen() const{
    int teiler=1;
    for(int i=2; i<=_zaehler && i<=_nenner;i++){
        if(_zaehler%i==0 && _nenner%i==0 && i>teiler){
            teiler=i;
        }
    }
    return Bruch(_zaehler/teiler, _nenner/teiler);
}

int Bruch::get_zaehler() const{
    return _zaehler;
}
 
int Bruch::get_nenner() const{
    return _nenner;
}

void Bruch::set_zaehler(int zaehler){
    _zaehler = zaehler;
}

void Bruch::set_nenner(int nenner){
    _nenner = nenner;
}