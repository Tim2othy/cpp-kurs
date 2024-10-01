#include <iostream>
#include "wurzel_fkt.hpp"

int main(){
    double a;
    std::cout<<"Welche Wurzel soll ich rechnen?"<<std::endl;
    std::cin>>a;
    std::cout<<"Das ist "<<wurzel(a)<<std::endl;
    return 0;
}