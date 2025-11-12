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
    AnimalBird B1("Parrot",5,"Not Hungry");
    AnimalnimalReptile R1("Snake",3, "Hungry");

    M1.addAnimal(M1);
    B1.addAnimal(B1);
    R1.addAnimal(R1);

    Visitor V1("Sarah Ali",3);

    return 0;
}
