#ifndef ASSIGNMENT1_VISITOR_H
#define ASSIGNMENT1_VISITOR_H
#include <iostream>
using namespace std;

class Visitor {
private:
    string visitorName;
    int ticketsBought;
public:
    void displayInfo() const {
        cout<<"Name: "<<visitorName<<endl;
        cout<<"number of tickets bought: "<<ticketsBought<<endl;
    }
    Visitor();
    Visitor(string visitorName,int ticketsBought);
    ~Visitor();
};
#endif //ASSIGNMENT1_VISITOR_H
