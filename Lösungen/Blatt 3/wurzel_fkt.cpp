#include "wurzel_fkt.hpp"

double wurzel(double a){
    double x=2;
    double y=1;
    while((x-y)>10e-10 || (x-y)<-10e-10){
        x=y;
        y=0.5*(x+(a/x));
    }
    return x;
}