#ifndef CLASSIS_2_PERSON_H
#define CLASSIS_2_PERSON_H

#include <string>

class Person {
private:
    Person();
    int hitPoints, stamina;
    int strength, agility;
    std::string name;
    void takeDamage();
    int getDamageValue();
};


#endif
