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
            cout << name_ << " ID: "<< id_<< endl;;
        }

};

unsigned int Student :: idGenerator_= 0; //class variable initialization

class ExchangeStudent{
    protected: 
        Student s_; //include student as an instance variable
        string homeUni_;

    public:
    ExchangeStudent(string name, string homeUni)
    : s_(name), homeUni_(homeUni) {}

    void print(){
        s_.print();
        cout<< " from: "<< homeUni_ << endl;
    }



};








int main(){

//Students
Student* s1= new Student("John");
Student* s2 =new Student( "Jill");
s1-> print(); //Method dispatch
s2->print(); //Method dispatch
//Exchange Students
ExchangeStudent * s3= new ExchangeStudent("Saddam", "University of Afghanistan");
ExchangeStudent * s4= new ExchangeStudent ("Zakiya", "University of Afghanistan");
s3->print();
s4->print();



}
