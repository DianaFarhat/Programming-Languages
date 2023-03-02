#include <iostream>
#include <cstring>
#include <assert.h>


using namespace std;
class Student{
    protected: //visible to class and subclasses 
        const unsigned int id_;
        string name_;
        string exchangeHome_; //Extra Variable 
        static unsigned int idGenerator_; //Class variable
        static unsigned int genID() {return idGenerator_ ++ ; } //Class method
    public: //visible outside class everywhere
        Student( string name, string exchangeHome="") //Optional
        : id_(genID()), name_(name), exchangeHome_(exchangeHome) {}
        void print(){
        cout << name_ << " ID: "<< id_;
            if (exchangeHome_!=""){ //Special Treatment
            cout<< " from "<<exchangeHome_; 
        }
        cout <<endl;
        }

};

//Make sure that you have initialized idGenerator_ outside of the Student class definition
unsigned int Student :: idGenerator_ = 1;

int main(){

//Students
Student * s1= new Student("Zakiya Tarhini", "UCL");
s1->print();



}