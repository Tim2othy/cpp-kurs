#include <iostream>
#include <cmath>

//nimmt an, dass die Koeffizienten vom groessten Exponenten an nummeriert sind. Beginnend bei 0.
class QuadPol {
public:
QuadPol(double a,double b,double c){
    if(a==0){
        std::cout<< "Das ist nicht quadratisch"<<std::endl;
        return;
    }
    _koef[0] = a;
    _koef[1] = b;
    _koef[2] = c;
}

QuadPol(double d,double e, double f, bool anders){
    if(d==0){
        std::cout<< "Das ist nicht quadratisch"<<std::endl;
        return;
    }
    _koef[0] = d;
    _koef[1] = -2*e;
    _koef[2] = e*e+f;
}

double get_koef(unsigned index) const{
    return _koef[index];
}

void set_koef(unsigned index, double wert){
    _koef[index] = wert;
}

QuadPol addieren(QuadPol &p2) const{
    return (QuadPol(_koef[0]+p2.get_koef(0),_koef[1]+p2.get_koef(1),_koef[2]+p2.get_koef(2)));
}

bool gegen_unendlich(){
    if(_koef[0]>0){
        return true;
    }
    return false;
}

void verschiebe(double x, double y){
    _koef[2]+=_koef[0]*x*x-_koef[1]*x+y;
    _koef[1]-=2*_koef[0]*x;
}

void nullstellen(){
    if(_koef[2]==0){
        std::cout<<"Das Polynom hat eine Nullstelle bei 0"<<std::endl;
        std::cout<<"Das Polynom hat eine Nullstelle bei "<<-_koef[1]/_koef[0]<<std::endl;
    }
    else{
        if(_koef[1]*_koef[1]-4*_koef[0]*_koef[2]>0){
            std::cout<<"Das Polynom hat eine Nullstelle bei "<<((-_koef[1]+sqrt(_koef[1]*_koef[1]-4*_koef[0]*_koef[2]))/(2*_koef[0]))<<std::endl; 
            std::cout<<"Das Polynom hat eine Nullstelle bei "<<((-_koef[1]-sqrt(_koef[1]*_koef[1]-4*_koef[0]*_koef[2]))/(2*_koef[0]))<<std::endl; 
        }
        else if(_koef[1]*_koef[1]-4*_koef[0]*_koef[2]==0){
            std::cout<<"Das Polynom hat eine Nullstelle bei "<<-_koef[1]/(2*_koef[0])<<std::endl;
        }
        else{
            std::cout<<"Das Polynom hat keine Nullstellen."<<std::endl;
        }
    }
}

double wert_bei(double x){
    return _koef[0]*x*x+_koef[1]*x+_koef[2];
}

private:
    double _koef[3];
};

void polynom_ausgeben(const QuadPol &pol)
{
    std::cout << pol.get_koef(0) << " x^2 + " << pol.get_koef(1) << " x + " << pol.get_koef(2) << std::endl;
}

int main()
{
    QuadPol p1(37, 42.5, 5.2);
    QuadPol p2(21, 753, 2.3, true);

    polynom_ausgeben(p2);

    p2.set_koef(0, 12.3);
    p2.set_koef(1, 17);
    p2.set_koef(2, 3.1);

    polynom_ausgeben(p1);
    polynom_ausgeben(p2);
    polynom_ausgeben(p1.addieren(p2));
    std::cout<<"p1 geht gegen unendlich ist "<<p1.gegen_unendlich()<<std::endl;
    p1.nullstellen();
    p1.verschiebe(2,3);
    polynom_ausgeben(p1);

}