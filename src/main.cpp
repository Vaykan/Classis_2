#include <iostream>

#include "Person.h"

using namespace std;

Person getFighter(){

}

int main() {
    Person fighterFirst, fighterSecond;
    Person fighter;
    while(fighterFirst.getHP() > 0 && fighterSecond.getHP()){
        fighterSecond.takeDamage(fighterFirst.getDamageValue());
        fighterSecond.getBattleStats();
        fighterFirst.takeDamage(fighterSecond.getDamageValue());
        fighterFirst.getBattleStats();
    }

    system("pause");
    return 0;
}
