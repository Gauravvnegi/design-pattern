#include "factory.hpp"


Vechicle* VechicleFactory::getVechicle(string vechicleType) {
    Vechicle* vechicle = nullptr;
    if (vechicleType == "car") {
        vechicle = new Car();
    }
    else if (vechicleType == "bike") {
        vechicle = new Bike();
    }
    return vechicle;
}