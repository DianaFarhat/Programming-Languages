
#include<iostream>
#include<cstring>

using namespace std;
class T;
class S;

class T{

    public:
     void virtual m(T*t ){t->mhelper(this);}
     void virtual mhelper(T*t){cout<< "T:: m(t)";}
     void virtual mhelper(S*s){cout<< "T:: m(s)";}

};

class S : public T{
    public:
    void virtual m(T*t ){t->mhelper(this);}
    void virtual mhelper(T*t){cout<< "S:: m(t)";}
     void virtual mhelper(S*s){cout<< "S:: m(s)";}

};

int main(){
T* t1= new S();
T* t2= new S();
t1->m(t2);

}

