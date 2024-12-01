#include "factory.hpp"
#include <iostream>

using namespace std;

int main(){
    string vechicleType;
    cin>>vechicleType;
    Vechicle * vechicle =  VechicleFactory :: getVechicle(vechicleType);
    vechicle->createVechicle();
}