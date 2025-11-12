#ifndef ASSIGNMENT1_ANIMAL_H
#define ASSIGNMENT1_ANIMAL_H
#include <iostream>
using namespace std;
class Animal {
private:
    string name;
    int age;
    bool isHungry;
    public:
    void display() const {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Is Hungry: "<<isHungry<<endl;
    }
    void feed() const {
        if(isHungry==true) {
            cout<<"Hungry"<<endl;
        }
    }
    Animal();
    Animal(string name,int age);
    ~Animal();
};
#endif


















