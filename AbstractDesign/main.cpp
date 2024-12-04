#include<bits/stdc++.h>
using namespace std;

class Shape{
    public:
        virtual void createShape() = 0 ;
};

class Circle : public Shape{
    public:
        void createShape(){
            cout<<"Circle Shape is Created"<<endl;
        }
};

class Rectangle : public Shape{
    public:
        void createShape(){
            cout<<"Rectangle Shape is Created"<<endl;
        }
};  

class Factory{
    public:
        virtual Shape *createFactoryShape(string shape) = 0;

};

class AbstractFactory : public Factory{
    public:
        Shape * createFactoryShape(string shape){
            if(shape=="Circle"){
                return new Circle();
            }
            if(shape=="Rec"){
                return new Rectangle();
            }
            else return nullptr;
        }
};

int main(){
    AbstractFactory ab;
    Shape *circle = ab.createFactoryShape("Circl");
    circle->createShape();

    Shape *rec =  ab.createFactoryShape("Rec");
    rec->createShape();
}