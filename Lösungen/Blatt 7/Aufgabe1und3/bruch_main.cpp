#include <iostream>
#include "bruch_opp.hpp"

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
    Bruch summe = erster+zweiter;
    summe.print();
    std::cout<<" in gekuerzt ";
    summe = summe.kuerzen();
    summe.print();
    std::cout<<std::endl<<"Das Produkt ist ";
    Bruch prod = erster*zweiter;
    prod.print();
    std::cout<<" in gekuerzt ";
    prod = prod.kuerzen();
    prod.print();
    std::cout<<std::endl;
}