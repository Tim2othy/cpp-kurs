#include <iostream>
#include "polynom_using.hpp"

void polynom_ausgeben(const Polynom &pol)
{
    std::cout << pol.get_koef(0);
    unsigned exponent = 0;
    for(int i=1; i<=pol.get_grad();i++){
        std::cout<< " x^"<< exponent <<" + " << pol.get_koef(i);
        exponent++;
    }
    std::cout<<" x^"<<exponent<<std::endl;
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
    polynom_ausgeben(p1+p2);
    std::cout<<"p1 geht gegen unendlich ist "<<p1.gegen_unendlich()<<std::endl;
    polynom_ausgeben(p1*p2);

}