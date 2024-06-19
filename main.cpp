#include <iostream>

#include "Person.h"

using namespace std;

int main() {
    Person fighter0, fighter1;
    while(fighter0.getHP() > 0 && fighter1.getHP()){
        cout << "------------------------------\n";
        fighter1.takeDamage(fighter0.getDamageValue());
        cout << "------------------------------\n";
        fighter0.takeDamage(fighter1.getDamageValue());

    }


    return 0;
}
