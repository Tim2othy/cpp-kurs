#include <iostream>
#include <ctime>

double power(double x, int n){
    if(n==0){
        return 1;
    }
    else if(n%2!=0){
        return x*power(x*x, (n-1)/2);
    }
    else{
        return power(x*x, n/2);
    }
}

double power_schleife(double x, int n){
    double potenz = 1;
    while(n!=0){
        if(n%2!=0){
            potenz *= x;
            x *=x;
            n=(n-1)/2;
        }
        else{
            x*=x;
            n/=2;
        }
    }
    return potenz;
}

double naiv_power(double x, int n){
    double potenz=1;
    for(int i=1;i<=n;i++){
        potenz*=x;
    }
    return potenz;
}

int main(){
    double x;
    int n;
    std::cout<<"Gib mir eine Zahl zu Potenzieren und dann die Potenz"<<std::endl;
    std::cin>>x;
    std::cin>>n;

    clock_t start , end;
    long diff;

    start=clock();
    double potenz = power(x,n);
    end=clock();
    diff=end-start;
    std::cout <<"Mit double-and-add Methode: "<<potenz<< " hat "<<static_cast<double>(diff)/CLOCKS_PER_SEC<< " Sekunden gebraucht."<<std::endl;
    
    start=clock();
    potenz = power_schleife(x,n);
    end=clock();
    diff=end-start;
    std::cout <<"Mit double-add-Schleife: "<<potenz<< " hat "<<static_cast<double>(diff)/CLOCKS_PER_SEC<< " Sekunden gebraucht."<<std::endl;
    
    start=clock();
    potenz = naiv_power(x,n);
    end=clock();
    diff=end-start;
    std::cout <<"Mit der naiven Methode: "<<potenz<< " hat "<<static_cast<double>(diff)/CLOCKS_PER_SEC<< " Sekunden gebraucht."<<std::endl;
    return 0;
}