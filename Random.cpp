#include "Random.h"

using namespace std;

int rGetNum(int min, int max){
    static random_device rd;
    static mt19937 gen(rd());
    uniform_int_distribution<> dist(min, max);
    return dist(gen);
}
