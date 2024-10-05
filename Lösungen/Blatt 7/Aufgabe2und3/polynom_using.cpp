#include <iostream>
#include <vector>
#include <cmath>
#include "polynom_using.hpp"

//nimmt an, dass die Koeffizienten vom kleinsten Exponenten an nummeriert sind. Beginnend bei 0.

using koef_typ = double;

Polynom::Polynom(unsigned n, std::vector<koef_typ> koef){
    grad = n;
    if(koef[0]==0){
        std::cout<< "Die erste Zahl sollte einen Wert haben, sonst reduziere den Grad"<<std::endl;
        return;
    }
    for(int i=0;i<=n;i++){
        _koef.push_back(koef[i]);
    }
}

unsigned Polynom::get_grad() const{
    return grad;
}

koef_typ Polynom::get_koef(unsigned index) const{
    return _koef[index];
}

void Polynom::set_koef(unsigned index, koef_typ wert){
    _koef[index] = wert;
}

Polynom Polynom::operator+(Polynom &p2) const{
    unsigned laenge = std::max(grad, p2.get_grad());
    std::vector<koef_typ> erg(laenge+1);
    for(int i=0; i<=laenge;i++){
        if(i<=grad && i<=p2.get_grad()){
            erg[i]=_koef[i]+p2.get_koef(i);
        }
        else if(i<= grad){
            erg[i]= _koef[i];
        }
        else{
            erg[i]=p2.get_koef(i);
        }
    }
    
    return Polynom(laenge, erg);
}

Polynom Polynom::operator*(Polynom &p2) const{
    unsigned laenge=grad+p2.get_grad();
    std::vector<koef_typ> erg(laenge+1,0);
    for(int i=0;i<=grad;i++){
        for(int j=0;j<=p2.get_grad();j++){
            erg[i+j] += _koef[i]*p2.get_koef(j);
        }
    }
    return Polynom(laenge, erg);
}

bool Polynom::gegen_unendlich(){
    if(_koef[grad]>0){
        return true;
    }
    return false;
}

koef_typ Polynom::wert_bei(koef_typ x) const{
    koef_typ erg=0;
    koef_typ expo=1;
    for(int i=0;i<=grad;i++){
        erg += _koef[i]*expo;
        expo *= x;
    }
    return erg;
}
