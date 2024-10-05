#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Person{
public:

    Person(std::vector<std::string> vornamen, std::string nachname, std::string gebort, unsigned alter){
        _vorname = vornamen;
        _nachname = nachname;
        _ort = gebort;
        _alter = alter;
    }

    Person(std::string vorname, std::string nachname, std::string gebort, unsigned alter){
        _vorname = {vorname};
        _nachname = nachname;
        _ort = gebort;
        _alter = alter;
    }

    Person(){
        std::cout<<"Wie viele Vornamen hast du?"<<std::endl;
        unsigned anz;
        std::cin>>anz;
        std::cout<<"Was sind die Vornamen?"<<std::endl;
        std::string name;
        for(int i=0; i<anz;i++){
            std::cin>>name;
            _vorname.push_back(name);
        }
        std::cout<<"Was ist dein Nachname?"<<std::endl;
        std::cin>>_nachname;
        std::cout<<"Was ist dein Geburtsort?"<<std::endl;
        std::cin>>_ort;
        std::cout<<"Wie alt bist du?"<<std::endl;
        std::cin>>_alter;
    }

    void print(){
        for(int i=0; i<_vorname.size();i++){
            std::cout<<_vorname[i]<<" ";
        }
        std::cout<<_nachname<<std::endl;
        std::cout<<"geboren in "<<_ort<<std::endl;
        std::cout<<"ist "<<_alter<<" Jahre alt."<<std::endl<<std::endl;
    }

//get Funktionen
    std::vector<std::string> get_vorname() const{
        return _vorname;
    }

    std::string get__ersten_vorname() const{
        return _vorname[0];
    }

    std::string get_nachname() const{
        return _nachname;
    }

    std::string get_gebort() const{
        return _ort;
    }

    unsigned get_alter() const{
        return _alter;
    }

//set Funktionen
    void set_vorname(const std::vector<std::string> &vorname){
        _vorname=vorname;
    }

    void set__ersten_vorname(const std::string &vorname){
        _vorname[0]=vorname;
    }

    void set_nachname(const std::string &nachname){
        _nachname=nachname;
    }

    void set_gebort(const std::string &ort){
        _ort=ort;
    }

    void set_alter(unsigned alter){
        _alter=alter;
    }
//Vergleicht nach Alter
    bool operator< (Person p2){
        if(_alter<p2.get_alter()){
            return true;
        }
        return false;
    }

private:
    std::vector<std::string> _vorname;
    std::string _nachname;
    std::string _ort;
    unsigned _alter;
};

std::vector<Person> mind_so_alt(std::vector<Person> liste, unsigned n){
    std::vector<Person> erg;
    for(int i=0; i<liste.size();i++){
        if(liste[i].get_alter()>=n){
            erg.push_back(liste[i]);
        }
    }
    return erg;
}

std::vector<Person> mit_ort_sortiert(std::vector<Person> liste, std::string ort){
    std::vector<Person> erg;
    for(int i=0;i<liste.size();i++){
        if(liste[i].get_gebort()==ort){
            erg.push_back(liste[i]);
        }
    }
    sort(erg.begin(),erg.end());
    return erg;
}

int main(){
    Person p1(std::vector<std::string>{"Hello", "Kitty"}, "Kat", "Berlin", 3);
    Person p2("Peter", "Scholze", "Bonn", 54);
    Person p3({"Nora", "Sandra", "Vanessa"}, "Depenheuer", "Bonn", 19);
    Person p4 =Person();
    std::vector<Person> liste = {p1,p2,p3,p4};
    std::vector<Person> erg = mind_so_alt(liste, 20);
    std::cout<<std::endl<<"alle Menschen aus der Liste die mind 20 sind:"<<std::endl;
    for(int i=0;i<erg.size();i++){
        erg[i].print();
    }
    erg = mit_ort_sortiert(liste, "Bonn");
    std::cout<<std::endl<<"alle Menschen aus der Liste die in Bonn geb sind sortiert:"<<std::endl;
    for(int i=0;i<erg.size();i++){
        erg[i].print();
    }
}