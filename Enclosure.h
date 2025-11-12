#ifndef ASSIGNMENT1_ENCLOSURE_H
#define ASSIGNMENT1_ENCLOSURE_H
#include<iostream>

#include "Animal.h"
using namespace std;

class Enclosure {
private:
     Animal* animal;
    int Capacity;
    int currentCount;
public:
    void displayAnimal() const {
        for(int i=0;i<Capacity;i++) {
            cout<<ainmal[i]<<" ";
        }
    }

     void addAnimal(Animal* animal);
    Enclosure();
        Enclosure(string name,int age);
    ~Enclosure();
};
#endif //ASSIGNMENT1_ENCLOSURE_H
