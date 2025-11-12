#include <iostream>
#include "Animal.h"
#include "Mammel.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
using namespace std;

int main() {

    AnimalMammel M1("Lion",5,"Hungry");
    AnimalBird B1("Parrot",2,"Not Hungry");
    AnimalReptile R1("Snake",3,"Hungry");

    Enclosure E1;
    E1.addAnimal(&M1);
    E1.addAnimal(&B1);
    E1.addAnimal(&R1);

    Visitor V1("Sarah Ali",3);

    E1.displayAnimal();

    return 0;
}
