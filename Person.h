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
    int hitPoints, stamina;
    int strength, agility;
    std::string name;
    void takeDamage(int damage);
    int getDamageValue();
    void changeStamina(int inputDmg, int outputDmg);
    void decreaseStamina(int subtrahend);
    void decreaseHitPoints(int subtrahend);
    int tryDodge(int damage);
};


#endif
