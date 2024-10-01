#include <iostream>

double expo(double x){
    double pot=1;
    double summand = 1;
    int k=0;
    while(summand>10e-10 || summand<-10e-10){
        k++;
        summand*=x/k;
        pot+=summand;
    }
    std::cout<<k<<std::endl;
    return pot;
}

double logarithm(double x){
    if(x<0){
        std::cout<<"Das gibt es nicht. Please try again."<<std::endl;
        return 0;
    }
    double exp = (x-1)/(x+1);
    double log=exp;
    double summand = 1;
    int k=1;
    while(summand > 10e-10 || summand<-10e-10){
        exp *= (x-1)*(x-1)/((x+1)*(x+1));
        summand = exp * 1/(2*k+1);
        log+=summand;
        k++;
    }
    return 2*log;
}

int main(){
    double x;
    double y;
    std::cout<< "Gib mir zwei Zahlen zum Berechnen von x^y"<<std::endl;
    std::cin>>x;
    std::cin>>y;
    double power= expo(y*logarithm(x));
    std::cout<<"Das Ergebniss ist "<<power<<std::endl;
    return 0;
}