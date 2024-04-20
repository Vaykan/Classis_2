#include "Person.h"
#include "Random.h"
#include "NameList.h"

Person::Person() {
    hitPoints = rGetNum(70,100);
    stamina = rGetNum(80, 100);
    strength = rGetNum(50, 100);
    agility = rGetNum(60, 100);
    name = nameList[rGetNum(0, size(nameList))];
}

void Person::takeDamage() {

}
int Person::getDamageValue() {

}

