#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <cassert>

unsigned ggT(unsigned a,unsigned b){
    unsigned h;
    while(b!=0){
        h = a%b;
        a = b;
        b = h;
    }
    return a;
}

unsigned kgV(std::vector<unsigned> zahlen){
    unsigned kgv=zahlen[0];
    unsigned ggt;
    for(int i=1;i<zahlen.size();i++){
        ggt = ggT(kgv,zahlen[i]);
        kgv *= zahlen[i]/ggt;
    }
    return kgv;
}

int main(int count , char ** args ){
    if(count <= 1){
        std::cout << "Kein Dateiname eingegeben." << std::endl;
        return 0;
    }
    std::string dateiname = args[1];
    std::ifstream datei(dateiname);
    if(datei.fail()){
        std::cout << "Keine Datei " << dateiname << " gefunden." << std::endl;
        return 0;
    }
    std::string zeile;
    std::vector<unsigned> zahlen;
    while(std::getline(datei, zeile)){
        std::stringstream ss(zeile);
        unsigned a;
        ss >> a;
        if(ss.fail()){
            std::cout << "Zeile beginnt nicht mit einer Zahlen." << std::endl;
            return 0;
        }
        else{
            zahlen.push_back(a);
        }
    }
    std::cout<<"Der kleinste gemeinsame Teiler ist "<<kgV(zahlen)<<std::endl;
    return 0; 
}