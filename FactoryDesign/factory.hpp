#ifndef FACTORY_HPP
#define FACTORY_HPP

#include "car.hpp"
#include "bike.hpp"
#include "Vechicle.hpp"

class VechicleFactory{
    public:
        static Vechicle *getVechicle(string vechicle);
};


#endif