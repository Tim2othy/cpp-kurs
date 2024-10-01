#include <iostream>

class Bruch {
public:
Bruch(int zaehler, int nenner){
_zaehler = zaehler;
_nenner = nenner;
}
 
void print(){
    std::cout << _zaehler << " / " << _nenner << std::endl;
}
 
Bruch multiplizieren (const Bruch &bruch) const{
    return Bruch(_zaehler * bruch.get_zaehler(),_nenner * bruch.get_nenner());
}

Bruch addieren(const Bruch &bruch) const{
    return Bruch(_zaehler*bruch.get_nenner()+_nenner*bruch.get_zaehler(), _nenner*bruch.get_nenner());
}

Bruch kuerzen() const{
    int teiler=1;
    for(int i=2; i<=_zaehler && i<=_nenner;i++){
        if(_zaehler%i==0 && _nenner%i==0 && i>teiler){
            teiler=i;
        }
    }
    return Bruch(_zaehler/teiler, _nenner/teiler);
}

int get_zaehler() const{
    return _zaehler;
}
 
int get_nenner() const{
    return _nenner;
}

void set_zaehler(int zaehler){
    _zaehler = zaehler;
}

void set_nenner(int nenner){
    _nenner = nenner;
}

private:
    int _zaehler;
    int _nenner;
};

int main(){
    std::cout<<"Gebe Zaehler und Nenner einer Zahl "<<std::endl;
    int zaehler;
    int nenner;
    std::cin>> zaehler;
    std::cin>>nenner;
    Bruch erster = Bruch(zaehler,nenner);
    std::cout<<"Gebe Zaehler und Nenner einer zweiten Zahl "<<std::endl;
    std::cin>> zaehler;
    std::cin>>nenner;
    Bruch zweiter = Bruch(zaehler,nenner);
    std::cout<<"Die Summe der beiden ist ";
    Bruch summe = erster.addieren(zweiter);
    summe.print();
    std::cout<<" in gekuerzt ";
    summe = summe.kuerzen();
    summe.print();
    std::cout<<std::endl<<"Das Produkt ist ";
    Bruch prod = erster.multiplizieren(zweiter);
    prod.print();
    std::cout<<" in gekuerzt ";
    prod = prod.kuerzen();
    prod.print();
    std::cout<<std::endl;
}