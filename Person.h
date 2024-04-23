#ifndef CLASSIS_2_PERSON_H
#define CLASSIS_2_PERSON_H

#include <string>

class Person {
private:
    const int minHitPoints = 70;
    const int maxHitPoints = 220;
    const int minStamina = 80;
    const int maxStamina = 450;
    const int minStrength = 50;
    const int maxStrength = 100;
    const int minAgility = 60;
    const int maxAgility = 100;
    Person();
    float hitPoints, stamina;
    float strength, agility;
    std::string name;
    void takeDamage(int damage);
    void changeStamina(int inputDmg = 0, int outputDmg = 0);
    void decreaseStamina(int subtrahend);
    int getDamageValue();
};


#endif
