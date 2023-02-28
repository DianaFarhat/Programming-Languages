#include <iostream>
#include <cstring>
#include <assert.h>

using namespace std;

struct MyType {
    virtual f()=0;
};

struct TwoInts : MyType {
    int i1;
    int i2;

    int f(){
        return i1 + i2;
    }
};

struct Str : MyType {
    const char * s;

    int f(){
        return strlen(s);
    }
};

struct Pizza : MyType{
    int f(){
        return 3;
    }
};

int main(){
    struct Str dominos;
    dominos.s= "hi";
    cout << dominos.f();
}
