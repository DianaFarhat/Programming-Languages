
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

class ExchangeStudent : public Student{
    protected:
    string homeUni_;
    public:
    ExchangeStudent(string name, string homeUni)
        : Student(name), homeUni_(homeUni) {}
    void print(){
        cout << name_ << "ID: "<<id_ << " from "<<homeUni_;
    }    
};

int main(){
    Student *s1 = new ExchangeStudent("Diana", "NYC");
    s1->print();


}