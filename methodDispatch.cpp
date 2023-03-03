#include<iostream>
#include <cstring>

using namespace std;


class T{
    public :
    void m() {cout << "T:: m()"<< endl;}
   virtual void mDynamic() {cout << "T:: m()"<< endl;}
};

class S : public T{
    public:
    void m() {cout << "S::m()"<<endl;}
    virtual void mDynamic() {cout << "S::m()"<<endl;}
};

int main()
{
//Static Dispatch (default) : the method to be dispatched is selected based on the static type of the objects involved    
T * t1= new S();
t1->m();
//Dynamic Dispatch (virtual): is a form of method dispatch where the method to be dispatched is selected based on the dynamic type of the objects involved
T * t2= new S();
t2->mDynamic();
}

