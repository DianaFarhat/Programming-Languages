#include<iostream>
#include<cstring>

using namespace std;


class LandAnimal{
    public:
    int numLegs;
    int speed;//found in Water Animal as well.
     void faster() {cout << "faster land animal"<<endl;} //found in Water Animal as well.
    void run(){ cout << "I can run"<<endl;}
};

class  WaterAnimal{
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
    myAnimal->WaterAnimal::speed= 300;
    myAnimal-> LandAnimal :: faster();
    myAnimal -> WaterAnimal::faster();
    // ***
    myAnimal->run();
    myAnimal->swim();


}
