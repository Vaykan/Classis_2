#include "Person.h"
#include "Random.h"

const std::string nameList[] = {"Alice", "Bob", "Charlie", "David", "Emma", "Frank", "Grace", "Henry", "Ivy", "Jack",
                                "Kate", "Liam", "Mia", "Noah", "Olivia", "Peter", "Quinn", "Rachel", "Sam", "Taylor",
                                "Ursula", "Victor", "Wendy", "Xander", "Yvonne", "Zachary", "Amelia", "Benjamin", "Chloe", "Daniel",
                                "Ella", "Finn", "Gabriella", "Harry", "Isabella", "Jacob", "Lily", "Matthew", "Natalie", "Oscar",
                                "Penelope", "Quentin", "Rebecca", "Sophia", "Theodore", "Uma", "Vincent", "Willow", "Xavier",
                                "Yolanda", "Zoe", "Aaron", "Bella", "Caleb", "Diana", "Ethan", "Fiona", "George", "Hannah",
                                "Isaac", "Jessica", "Kevin", "Leah", "Michael", "Nora", "Owen", "Paige", "Quincy", "Riley",
                                "Samantha", "Thomas", "Ulysses", "Violet", "William", "Xena", "Yasmine", "Zara", "Andrew", "Brooklyn",
                                "Cameron", "Dylan", "Eva", "Felix", "Giselle", "Hazel", "Ian", "Jasmine", "Kylie", "Landon",
                                "Mason", "Nathan", "Oliver", "Piper", "Quinn", "Ronald", "Scarlett", "Toby", "Ursula", "Vivian",
                                "Wyatt", "Xander", "Yara", "Zack"};



Person::Person(){
    hitPoints = rGetNum(minHitPoints, maxHitPoints);
    stamina = rGetNum(minStamina, maxStamina);
    strength = rGetNum(minStrength, maxStrength);
    agility = rGetNum(minAgility, maxAgility);
    name = nameList[rGetNum(0, size(nameList) - 1)];
}

void Person::takeDamage(int damage) {
    double condition = 0.9;
    if(stamina == 0){
        cout << "";
        condition = 1;
    }
    damage *= condition;
    decreaseHitPoints(tryDodge(damage));
}
int Person::getDamageValue(){
    double condition = 1;
    if(stamina == 0){
        cout << name << " exhausted" << endl;
        condition = 0.3;
    }
    double dmg = rGetNum(1, 6) * (0.5 + (strength /(maxStrength - minStrength)));
    changeStamina(0, dmg);
    return dmg * condition;
}

void Person::changeStamina(int inputDmg = 0, int outputDmg = 0) {
    if(stamina != 0){
        if(inputDmg != 0){
            int subtrahend = inputDmg / 10;
            decreaseStamina(subtrahend);
            cout << "";
        }
        if(outputDmg != 0){
            int subtrahend = outputDmg / 5;
            decreaseStamina(subtrahend);
            cout << "";
        }
    }
}

void Person::decreaseStamina(int subtrahend) {
    stamina -= subtrahend;
    if(stamina < 0){
        stamina = 0;
    }
}

void Person::decreaseHitPoints(int subtrahend) {
    hitPoints -= subtrahend;
    if(hitPoints < 0){
        hitPoints = 0;
    }
}

int Person::tryDodge(int damage) {
    if(stamina == 0){
        return damage;
    }
    int chance = 20 * (0.5 + (agility / (maxAgility - minAgility)));
    if(chance >= rGetNum(1, 100)){
        cout << "";
        changeStamina(0, damage);
        return 0;
    }
    return damage;
}
