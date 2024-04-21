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

Person::Person() {
    hitPoints = rGetNum(70,100);
    stamina = rGetNum(80, 100);
    strength = rGetNum(50, 100);
    agility = rGetNum(60, 100);
    name = nameList[rGetNum(0, size(nameList) - 1)];
}

void Person::takeDamage() {

}
int Person::getDamageValue() {

}

