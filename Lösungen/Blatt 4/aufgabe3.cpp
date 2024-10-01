#include <iostream>

int rekursiv(unsigned n){
    if(n<3){
        return 1;
    }
    else{
        return 2*rekursiv(n-1)+rekursiv(n-2)+2*rekursiv(n-3);
    }
}

int iterativ(unsigned n){
    int a_1=1, a_2=1, a_3=1;
    int a;
    for(int i=3;i<=n;i++){
        a=2*a_1+a_2+2*a_3;
        a_3=a_2;
        a_2=a_1;
        a_1=a;
    }
    return a_1;
}

int main(){
    std::cout<<"Welches Folgenglied?"<<std::endl;
    unsigned n;
    std::cin>>n;
    std::cout<<"Das ist dann rekursiv "<<rekursiv(n)<<std::endl;
    std::cout<<"Das ist dann iterativ "<<iterativ(n)<<std::endl;
    return 0;
}