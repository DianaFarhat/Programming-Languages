#include <iostream>
#include <cstring>

using namespace std;

enum MyTypeTag {TwoInts, Str, Pizza};

struct MyType{
    enum MyTypeTag tag;
    union 
    {
        /* data */
        struct {int i1; int i2; } ;
        char * s;
        struct  {  };
    } ;
};

int f(MyType myVal){
    switch(myVal.tag){
        case TwoInts: return myVal.i1 + myVal.i2;
        case Str: return strlen(myVal.s);
        case Pizza: return 3;
    }
}

int main(){
    /*
    MyType myVal;
    myVal.tag = TwoInts;
    myVal.myType.twoInts.i1 = 3;
    myVal.myType.twoInts.i2 = 4;
    cout << f(myVal) << endl; // should output 7

    myVal.tag = Str;
    myVal.myType.s = "hello";
    cout << f(myVal) << endl; // should output 5

    myVal.tag = Pizza;
    cout << f(myVal) << endl; // should output 5
    */
}

    
