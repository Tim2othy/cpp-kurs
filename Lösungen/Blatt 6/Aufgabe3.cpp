#include <iostream>
#include <vector>
#include <cmath>

//nimmt an, dass die Koeffizienten vom kleinsten Exponenten an nummeriert sind. Beginnend bei 0.
class Polynom {
public:
Polynom(unsigned n, std::vector<double> koef){
    grad = n;
    if(koef[0]==0){
        std::cout<< "Die erste Zahl sollte einen Wert haben, sonst reduziere den Grad"<<std::endl;
        return;
    }
    for(int i=0;i<=n;i++){
        _koef.push_back(koef[i]);
    }
}

unsigned get_grad() const{
    return grad;
}

double get_koef(unsigned index) const{
    return _koef[index];
}

void set_koef(unsigned index, double wert){
    _koef[index] = wert;
}

Polynom addieren(Polynom &p2) const{
    unsigned laenge = std::max(grad, p2.get_grad());
    std::vector<double> erg(laenge+1);
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

Polynom multiplizieren(Polynom &p2) const{
    unsigned laenge=grad+p2.get_grad();
    std::vector<double> erg(laenge+1,0);
    for(int i=0;i<=grad;i++){
        for(int j=0;j<=p2.get_grad();j++){
            erg[i+j] += _koef[i]*p2.get_koef(j);
        }
    }
    return Polynom(laenge, erg);
}

bool gegen_unendlich(){
    if(_koef[0]>0){
        return true;
    }
    return false;
}

double wert_bei(double x){
    double erg=0;
    double expo=1;
    for(int i=0;i<=grad;i++){
        erg += _koef[i]*expo;
        expo *= x;
    }
    return erg;
}

private:
    std::vector<double> _koef;
    unsigned grad;
};

void polynom_ausgeben(const Polynom &pol)
{
    std::cout << pol.get_koef(0);
    unsigned exponent = 0;
    for(int i=1; i<=pol.get_grad();i++){
        std::cout<< " x^"<< exponent <<" + " << pol.get_koef(i);
        exponent++;
    }
    std::cout<<std::endl;
}

int main()
{
    Polynom p1(2, {6, 4, 2});
    Polynom p2(1, {2, 1});

    polynom_ausgeben(p2);

    p2.set_koef(0, 1);
    p2.set_koef(1, 2);

    polynom_ausgeben(p1);
    polynom_ausgeben(p2);
    polynom_ausgeben(p1.addieren(p2));
    std::cout<<"p1 geht gegen unendlich ist "<<p1.gegen_unendlich()<<std::endl;
    polynom_ausgeben(p1.multiplizieren(p2));

}