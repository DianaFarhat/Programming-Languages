#include <iostream>
#include <cstring>
#include <assert.h>

using namespace std;

enum MyTypeTag {TwoInts, Str, Pizza};

struct MyType{
    enum MyTypeTag tag;
    union 
    {
        /* data */
        struct {int i1; int i2; } ;
        const char * s;
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
    
     // Test case 1
    MyType t1;
    t1.tag = TwoInts;
    t1.i1 = 2;
    t1.i2 = 3;
    assert(f(t1) == 5);

    // Test case 2
    MyType t2;
    t2.tag = Str;
    t2.s = "Hello";
    assert(f(t2) == 5);

    // Test case 3
    MyType t3;
    t3.tag = Pizza;
    assert(f(t3) == 3);

    cout << "All test cases passed!" << endl;
   
    
}

    
