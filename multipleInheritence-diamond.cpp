#include<iostream>
#include<cstring>

using namespace std;


class Animal{
    public:
    int mass;
};

class LandAnimal : public virtual  Animal{
    public:
    int numLegs;
    int speed;//found in Water Animal as well.
     void faster() {cout << "faster land animal"<<endl;} //found in Water Animal as well.
    void run(){ cout << "I can run"<<endl;}
};

class  WaterAnimal : public virtual Animal{
    public:
    int maxDepth;
    int speed; //found in Land Animal as well.
    void faster() {cout << "faster water animal"<<endl;} //found in Land Animal as well.
    void swim(){ cout << "I can swim"<<endl;}
};

class LandWaterAnimal : public LandAnimal, public WaterAnimal {


};


int main(){
    LandWaterAnimal * myAnimal= new LandWaterAnimal();
    myAnimal->maxDepth= 600;
    myAnimal-> numLegs=5;
    //resolving ambiguity 
    myAnimal->LandAnimal::speed= 200; 
    myAnimal->WaterAnimal::speed= 200; 
    myAnimal-> LandAnimal :: faster();
    myAnimal -> WaterAnimal::faster();
    // Diamond Problem
    myAnimal->mass=80; //add keyword virtual if you only want 1 copy of mass 
    // Other methods
    myAnimal->run();
    myAnimal->swim();


}
