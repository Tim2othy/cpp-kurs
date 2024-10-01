#include <iostream>

void minimax(int x, int y, int z, int &min, int &max){
    min=x;
    max=x;
    if(y<min){
        min=y;
    }
    else{
        max=y;
    }
    if(z<min){
        min=z;
    }
    else if(z>max){
        max=z;
    }
}

//oder nutze einfach nur std::min(x,y,z) und std::max(x,y,z) mit #include algorithm

int main(){
    int x,y,z;
    std::cout<<"Gib mir drei Zahlen hintereinander"<<std::endl;
    std::cin>>x;
    std::cin>>y;
    std::cin>>z;
    int min,max;
    minimax(x,y,z,min,max);
    std::cout<<"Das Minimum ist "<< min << " und das Maximum ist "<< max <<std::endl;
    return 0;
}