#include<iostream>

int addiere_37 (int & x) // Argument wird per Referenz übergeben
{
    x += 37;
    return x;
}

int main ()
{
    int a = 42; // a kann nicht const sein, da es per Referenz übergeben wird
    addiere_37(a);
    int resultat = addiere_37(a);
    std::cout << " a ist " << a << " und result ist " << resultat 
        << std::endl;
    // addiere_37(14); // das geht nicht 
    int zahl = 14;
    addiere_37(zahl);
    
    return 0;
}
        
    
