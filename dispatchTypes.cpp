#include<iostream>
#include <cstring>

using namespace std;

class S;

class T{
    public :
    virtual void m(T * t) {cout << "T:: m(T)"<< endl;}
    virtual void m(S * s ) {cout << "T:: m(S)"<< endl;}
   
};

class S : public T{
    public:
    virtual void m(T * t) {cout << "S::m(T)"<<endl;}
    virtual void m(S * s) {cout << "S::m(S)"<<endl;}


};

int main(){
    //Single dispatch is a form of dynamic dispatch where the method to be dispatched only considers the dynamic type of the dispatching object
    T * t1= new S();
    T * t2= new S();
    t1->m(t2);
    //Multiple dispatch would have printed S::m(S)
}