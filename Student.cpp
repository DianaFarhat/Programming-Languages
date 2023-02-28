#include <iostream>
#include <cstring>
#include <assert.h>

using namespace std;
class Student{
    protected: //visible to class and subclasses 
        const unsigned int id_;
        string name_;
        static unsigned int idGenerator_; //Class variable
        static unsigned int genID() {return idGenerator_ ++ ; } //Class method
    public: //visible outside class everywhere
        Student( string name)
        : id_(genID()), name_(name) {}

        void print(){
            cout << name_ << " ID: "<< id_;
        }

};

unsigned int Student :: idGenerator_= 0; //class variable initialization


int main(){


Student* s1= new Student("John");
Student* s2 =new Student( "Jill");
s1-> print(); //Method dispatch
cout <<endl;
s2->print(); //Method dispatch

}