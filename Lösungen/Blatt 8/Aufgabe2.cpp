#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cassert>

class Matrix{
    public:
        Matrix(std::string dateiname){
            std::ifstream datei(dateiname);
            if(datei.fail()){
                std::cout << "Keine Datei " << dateiname << " gefunden." << std::endl;
                return;
            }
            std::string zeile;
            std::getline(datei, zeile);
            std::stringstream ss(zeile);
            ss >> groesse;
            if(ss.fail()){
                std::cout<< "Die erste Zeile ist nicht eine Zahl." <<std::endl;
                return;
            }
            matrix = std::vector<std::vector<unsigned>>(groesse);
            while(std::getline(datei, zeile)){
                std::stringstream ss2(zeile);
                unsigned a,b;
                ss2 >> a >> b;
                if(ss2.fail()){
                    std::cout << "Zeile beginnt nicht mit zwei Zahlen." << std::endl;
                    return;
                }
                else{
                    assert(a<groesse);
                    assert(b<groesse);
                    matrix[a].push_back(b);
                }
            }
        }

        std::vector<unsigned> get_pairs(unsigned i){
            return matrix[i];
        }

        unsigned get_n(){
            return groesse;
        }

        bool existiert_weg(){
            if(groesse<2){
                std::cout<<"Es gibt keine Zahl 1"<<std::endl;
                return false;
            }
            std::vector<bool> existiert(groesse,false);
            existiert[0]=true;
            std::vector<unsigned> parent(groesse);
            std::vector<unsigned> queue = {0};
            unsigned current;
            while(queue.size()!=0){
                current = queue.back();
                queue.pop_back();
                std::vector<unsigned> erreichbar = matrix[current];
                for(int i=0; i<erreichbar.size();i++){
                    if(erreichbar[i]==1){
                        unsigned previous = current;
                        std::vector<unsigned> weg = {1, current};
                        while(previous !=0){
                            previous = parent[previous];
                            weg.push_back(previous);
                        }
                        std::cout<<"Der Weg ist ";
                        for(int i=weg.size()-1;i>=0;i--){
                            std::cout<<weg[i]<<" ";
                        }
                        std::cout<<std::endl;
                        return true;
                    }
                    if(existiert[erreichbar[i]]== false){
                        existiert[erreichbar[i]]= true;
                        queue.push_back(erreichbar[i]);
                        parent[erreichbar[i]]=current;

                    }
                }
                    
            }
            return false;
        }
    private:
        std::vector<std::vector<unsigned>> matrix;
        unsigned groesse;
};

int main(int count , char ** args ){
    if(count <= 1){
        std::cout << "Kein Dateiname eingegeben." << std::endl;
        return 0;
    }
    std::string dateiname = args[1];
    Matrix m(dateiname);
    m.existiert_weg();
}
