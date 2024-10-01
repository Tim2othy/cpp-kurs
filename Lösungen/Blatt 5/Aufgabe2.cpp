#include <iostream>
#include <vector>

std::vector<int> verschmelze(const std::vector<int> &a,const std::vector<int> &b){
    int i=0;
    int j=0;
    std::vector<int> erg;
    while((i<a.size()) && (j<b.size())){
        if(a[i]<b[j]){
            erg.push_back(a[i]);
            i++;
        }
        else{
            erg.push_back(b[j]);
            j++;
        }
    }
    while(i<a.size()){
        erg.push_back(a[i]);
        i++;
    }
    while(j<b.size()){
        erg.push_back(b[j]);
        j++;
    }
    return erg;
}

std::vector<int> mergesort(std::vector<int> v){
    if(v.size()<2){
        return v;
    }
    std::vector<int> a (v.begin(),v.end()-v.size()/2);
    std::vector<int> b (v.end()-v.size()/2, v.end());
    a=mergesort(a);
    b=mergesort(b);
    return verschmelze(a,b);
}

int main(){
    std::cout<<"Geben sie Vektoren an. Geben sie dafuer erst die Laenge und dann den Inhalt an. Der erste darf unsortiert sein."<<std::endl;
    unsigned laenge;
    std::cin>>laenge;
    std::vector<int> a(laenge);
    for(int i=0;i<laenge;i++){
        std::cin>>a[i];
    }
    std::cout<<"Jetzt der zweite."<<std::endl;
    std::cin>>laenge;
    std::vector<int> b(laenge);
    for(int i=0;i<laenge;i++){
        std::cin>>b[i];
    }
    a=mergesort(a);
    std::vector<int> erg= verschmelze(a,b);
    for(int i=0;i<erg.size();i++){
        std::cout<<erg[i]<<" ";
    }
    std::cout<<std::endl;

}